#include <common/automata.h>
dfastatus naive_dfa(transrule* rule, U64 rule_length, U64* hint_table,const char* input, U64 max_length)
{
    const char* pointer   = input;
    const char* end       = input+max_length;
    transrule*  end_trans = rule+rule_length;
    dfastatus current_status = 0;
    dfastatus last_accepted_status = 0;
    const char* last_accepted_position = pointer;
    while(pointer!=end) {
        U64 off = hint_table[current_status&0xFFFFFFFF];
        transrule* current_rule = &rule[off];
        while(current_rule!=end_trans&&current_rule->curr==current_status) {
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
                }
            }
            else {
                if(current_rule->input.value==*pointer) {
                    goto check_success;
                }
            }
            current_rule++;
        }
        //Not found.
        return last_accepted_status;
    check_success:
        current_status = current_rule->next;
        if(current_status&ACCEPTED) {
            last_accepted_status = current_status;
            last_accepted_position = pointer;
        }
        continue;
    }
    (void)last_accepted_position;
    return last_accepted_status;
}
