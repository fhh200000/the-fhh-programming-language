#include <common/automata.h>
#include <stdio.h>
dfastatus naive_dfa(transrule* rule, U64 rule_length, U64* hint_table,const char* input, U64 max_length,const char** next_position)
{
    const char* pointer   = input;
    const char* end       = input+max_length;
    transrule*  end_trans = rule+rule_length;
    dfastatus current_status = 0;
    dfastatus last_accepted_status = 0;
    const char* last_accepted_position = pointer;
    while(pointer!=end) {
        U64 off = hint_table[current_status&(~ACCEPTED)];
        transrule* current_rule = &rule[off];
        while(current_rule!=end_trans&&current_rule->curr==(current_status&(~ACCEPTED))) {
            if(current_rule->input.type==VALUE_CATEGORY) {
                switch(current_rule->input.value) {
                    case CATEGORY_CHARACTER: {
                        if((*pointer>='a'&&*pointer<='z')||(*pointer>='A'&&*pointer<='Z')) {
                            goto check_success;
                        }
                        break;
                    }
                    case CATEGORY_ANY: {
                        goto check_success;
                    }
                    case CATEGORY_DIGIT: {
                        if(*pointer>='0'&&*pointer<='9') {
                            goto check_success;
                        }
                        break;
                    }
                    case CATEGORY_END_INPUT: {
                        break;
                    }
                }
            }
            else {
                if(current_rule->input.value==*pointer) {
                    goto check_success;
                }
            }
            current_rule++;
        }
    goto fail_target;
    check_success:
        current_status = current_rule->next;
        if(current_rule->next&ACCEPTED) {
            last_accepted_status = current_status;
            last_accepted_position = pointer+1;
        }
        pointer++;
        continue;
    }
    //At the end of our input, we give the failed target another chance.
fail_target:;
    transrule* current_rule = &rule[hint_table[current_status&(~ACCEPTED)]];
    while(current_rule!=end_trans&&current_rule->curr==(current_status&(~ACCEPTED)))
    {
        if(current_rule->input.type==VALUE_CATEGORY&&current_rule->input.value==CATEGORY_END_INPUT) {
            current_status = current_rule->next;
            if(current_rule->next&ACCEPTED) {
                last_accepted_status = current_status;
                last_accepted_position = pointer;
            }
            break;
        }
        current_rule++;
    }
    if(next_position!=nullptr) {
        *next_position = last_accepted_position;
    }
    return last_accepted_status&(~ACCEPTED);
}
