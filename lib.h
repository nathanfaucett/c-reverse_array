#ifndef __REVERSE_ARRAY_H__
#define __REVERSE_ARRAY_H__


#include "types/lib.h"


#define REVERSE_ARRAY_HEADER(NAME, TYPE)\
    void reverse_##NAME##_array(TYPE* string, uintsize length);

#define REVERSE_ARRAY_SRC(NAME, TYPE)\
    void reverse_##NAME##_array(TYPE* string, uintsize length) {\
        uintsize i = 0;\
        uintsize j = length - 1;\
        TYPE temp;\
        while (i < j) {\
            temp = string[i];\
            string[i] = string[j];\
            string[j] = temp;\
            i += 1;\
            j -= 1;\
        }\
    }\

REVERSE_ARRAY_HEADER(char, char);


#endif
