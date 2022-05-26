#include <lexical/lexicaltable.h>
/*
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
 */
transrule lexicaltable[] = {
    {0,{VALUE_RAW,'b'},1}, //byte
    {0,{VALUE_RAW,'c'},1},
    {0,{VALUE_RAW,'i'},1},
    {0,{VALUE_RAW,'l'},1},
    {0,{VALUE_RAW,'f'},1},
    {0,{VALUE_RAW,'d'},1},
    {0,{VALUE_RAW,'i'},1},
    {0,{VALUE_RAW,'i'},1},
    {0,{VALUE_RAW,'i'},1},
    {0,{VALUE_RAW,'i'},1},
};

