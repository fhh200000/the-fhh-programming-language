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
    CATEGORY_DIGIT
} value_categories;
dfastatus naive_dfa(transrule* instruct,int rulelength,int inputlength,char* in);

#endif
