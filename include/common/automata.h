#ifndef AUTOMATA_H
#define AUTOMATA_H
#include <common.h>
typedef U64 dfastatus;
#define ACCEPTED 0x8000000000000000
#define REJECTED 0xFFFFFFFFFFFFFFFF
typedef struct {
    U64 curr;
    struct {
        enum {
            VALUE_RAW,
            VALUE_CATEGORY
        } type;
        U8 value;
    } input;
    U64 next;
} transrule;
typedef enum {
    CATEGORY_CHARACTER,
    CATEGORY_DIGIT,
    CATEGORY_ANY,
    CATEGORY_END_INPUT
} value_categories;
typedef enum {
    TOKEN_BYTE=4,
    TOKEN_CHAR=8,
    TOKEN_INT=11,
    TOKEN_LONG=15,
    TOKEN_SHORT=20,
    TOKEN_UNSIGNED=28,
    TOKEN_DOLLAR=29,
    TOKEN_GREATER_THAN=30,
    TOKEN_GREATER_EQUAL=33,
    TOKEN_LOWER_THAN=31,
    TOKEN_LOWER_EQUAL=34,
    TOKEN_ASSIGN=35,
    TOKEN_EQUAL=36,
    TOKEN_REVERSE=37,
    TOKEN_NOT_EQUAL=38,
    TOKEN_ADD=39,
    TOKEN_SUB=40,
    TOKEN_MULTIPLY=41,
    TOKEN_DIVIDE=42,
    TOKEN_BIT_AND=43,
    TOKEN_BIT_OR=44,
    TOKEN_LOGICAL_AND=46,
    TOKEN_LOGICAL_OR=47,
    TOKEN_BIT_NOT=45,
    TOKEN_TYPE_INDICATOR=48,
    TOKEN_SINGLE_QUOTE=49,
    TOKEN_DOUBLE_QUOTE=50,
    TOKEN_COMMA=51,
    TOKEN_AT=52,
    TOKEN_SEMICOLON=53,
    TOKEN_BRACE_LEFT=54,
    TOKEN_BRACE_RIGHT=59,
    TOKEN_PARENTHESIS_LEFT=56,
    TOKEN_PARENTHESIS_RIGHT=57,
    TOKEN_BRACKETS_LEFT=55,
    TOKEN_BRACKETS_RIGHT=58,
    TOKEN_LOAD=61,
    TOKEN_SUBROUTINE=70,
    TOKEN_RETURN=76,
    TOKEN_NUMBER=77,
    TOKEN_VAR_NAME=78,
    TOKEN_STRING=80,
    TOKEN_CHARACTER=82
} tokens;
dfastatus naive_dfa(transrule* rule, U64 rule_length, U64* hint_table,const char* input, U64 max_length,const char** next_position);

#endif
