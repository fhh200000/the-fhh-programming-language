#include <lexical/lexical.h>
#include <common/automata.h>
transrule rules[] = {

};
char* lexical_entry(char* input_data, token_structure* buffer)
{
    char* pos = input_data;
    dfastatus status = 0;
    while(status!=REJECTED) {
        for(int i=0;i<sizeof(rules)/sizeof(transrule);i++) {

        }
    }
    return pos;
}
