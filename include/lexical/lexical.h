#ifndef LEXICAL_H
#define LEXICAL_H
#include <common.h>
#include <common/tree.h>
#include <common/automata.h>
typedef struct {
    transrule type;
    U8* begin;
    U64 length;
} token_structure;
/*
    Main token processor.
    Returns: Next position as U8*.
    Parameters:
    1.Input data as U8*.
    2.token buffer as token_structure*.
 */
const U8* lexical_entry(const U8* input_data, U64 maximum_length, token_structure* buffer);
#endif
