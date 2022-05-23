#include <lexical/lexical.h>
#include <common/automata.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
transrule rules[] = {

};
const U8* lexical_entry(const U8* input_data, U64 maximum_length, token_structure* buffer)
{
#if 1
    //For debug only.
    static char buf[200];
    int len=maximum_length>200?200:maximum_length;
    memcpy(buf,input_data,len);
    buf[len]='\0';
    printf("Token:%s\n",buf);
#endif
    return input_data+len;
}
