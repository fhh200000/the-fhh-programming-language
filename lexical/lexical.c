#include <lexical/lexical.h>
#include <common/automata.h>
#include <lexical/lexicaltable.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
const char* lexical_entry(const char* input_data, U64 maximum_length, token_structure* buffer)
{
    dfastatus status;
    const char* next_position = (const char*)input_data;
    status = naive_dfa(lexicaltable,sizeof(lexicaltable)/sizeof(transrule),lexicaltable_hint,next_position,maximum_length,&next_position);
    buffer->begin = input_data;
    buffer->length = next_position-input_data;
    buffer->type = status;
    return next_position;
}
