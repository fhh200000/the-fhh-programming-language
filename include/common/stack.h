#ifndef STACK_H
#define STACK_H
#include <common.h>
#define stack(x) struct { \
    U64 size; \
    U64 stack_width; \
    U64 rsp;  \
    x   data[0] \
};

#endif
