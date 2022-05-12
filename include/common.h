#ifndef COMMON_H
#define COMMON_H
typedef unsigned long long U64;
typedef unsigned int U32;
typedef unsigned short U16;
typedef unsigned char U8;

typedef long long I64;
typedef int I32;
typedef short I16;
typedef char I8;

typedef U8 byte;
typedef enum {
    STATUS_SUCCESS=0,
    STATUS_ABORTED=-1,
    STATUS_ERROR  =-2,
    STATUS_INVALID_TOKEN=-3
} fhhc_status;
#ifndef NULL
#define NULL 0
#endif
#define nullptr (void*) 0

#endif
