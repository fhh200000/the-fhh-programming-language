#include <grammar/grammar.h>
#include <lexical/lexical.h>
fhhc_status grammar_entry(const U8* input_buffer, U64 input_length, FILE* output)
{
    token_structure token;
    const U8* p_begin = input_buffer;
    const U8* p_end   = input_buffer+input_length;
    const U8* p;
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
        }
    }
    return STATUS_SUCCESS;
}
