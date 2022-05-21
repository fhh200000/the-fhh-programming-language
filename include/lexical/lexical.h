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
    U8 value[0];
} token_structure;
/*
    Main token processor.
    Returns: Next position as char*.
    Parameters:
    1.Input data as char*.
    2.token buffer as token_structure*.
 */
char* lexical_entry(char* input_data, token_structure* buffer);
#endif
