#ifndef LEXICAL_H
#define LEXICAL_H
#include <common.h>
#include <common/tree.h>
typedef enum {
    TOKEN_TYPENAME,
    TOKEN_VARNAME,
    TOKEN_BRACE_LEFT,
    TOKEN_BRACE_RIGHT,
    TOKEN_PARENTHESIS_LEFT,
    TOKEN_PARENTHESIS_RIGHT,
    TOKEN_BRACKETS_LEFT,
    TOKEN_BRACKETS_RIGHT,
    TOKEN_SEMICOLON,
    TOKEN_MATH,
    TOKEN_LOAD,
    TOKEN_TYPE_CONV,
    TOKEN_ASSIGN,
    TOKEN_COMMA,
    TOKEN_INVALID,
} token_type;
typedef struct {
    token_type type;
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
