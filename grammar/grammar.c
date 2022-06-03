#include <grammar/grammar.h>
#include <lexical/lexical.h>
#include <string.h>
fhhc_status grammar_entry(const char* input_buffer, U64 input_length, FILE* output)
{
    static char buf[200];
    token_structure token;
    const char* p_begin = input_buffer;
    const char* p_end   = input_buffer+input_length;
    const char* p;
    while(p_begin!=p_end) {
        while((p_begin!=p_end)&&((*p_begin=='\n')||(*p_begin==' '))) {
            p_begin++;
        }
        p = p_begin;
        while((*p!='\n')&&(*p!=' ')&&(p!=p_end)) {
            p++;
        }
        if(p-p_begin) {
            p_begin = lexical_entry(p_begin,p-p_begin,&token);
            memcpy(buf,token.begin,token.length);
            buf[token.length]='\0';
            printf("Token %s \t type %d length %lld\n",buf,token.type,token.length);
        }
    }
    return STATUS_SUCCESS;
}
