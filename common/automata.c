#include <common/automata.h>
#include <stdio.h>
dfastatus naive_dfa(transrule* rule, U64 rule_length, U64* hint_table,const char* input, U64 max_length,const char** next_position)
{
    const char* pointer   = input;
    const char* end       = input+max_length;
    transrule*  end_trans = rule+rule_length;
    dfastatus current_status = 0;
    char skip='\0';
    dfastatus last_accepted_status = 0;
    const char* last_accepted_position = pointer;
main_loop:
    while(pointer!=end) {
        U64 off = hint_table[current_status];
        transrule* current_rule = &rule[off];
        printf("Check %c\n",*pointer);
        while(current_rule!=end_trans&&current_rule->curr==current_status) {
            printf("curr:%lld,input type %d,value %c,next %lld\n",current_rule->curr,current_rule->input.type,current_rule->input.value,current_rule->next);
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
                if(current_rule->input.value==*pointer&&(current_rule->input.value!=skip)) {
                    goto check_success;
                }
            }
            current_rule++;
        }
        printf("Failed\n");
        if(next_position!=nullptr) {
            *next_position = last_accepted_position;
        }
        return last_accepted_status;
    check_success:
        current_status = current_rule->next;
        if(current_rule->next&ACCEPTED) {
            current_status&=(~ACCEPTED);
            last_accepted_status = current_status;
            last_accepted_position = pointer+1;
            skip='\0';
        }
        pointer++;
        continue;
    }
    if(next_position!=nullptr) {
        *next_position = last_accepted_position;
    }
    //HACK:USE GUESSED STATUS 0!
    if(last_accepted_status==0) {
        skip = *last_accepted_position;
        current_status = last_accepted_status;
        pointer = last_accepted_position;
        goto main_loop;
    }
    return last_accepted_status;
}
