#ifndef _STD_TYPES_H

#define _STD_TYPES_H

#define ZERO_INIT 0
#define ZERO 0

#include<stdio.h>
#include<stdlib.h>


typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;

typedef signed char sint8_t;
typedef signed short int sint16_t;
typedef signed int sint32_t;


typedef enum ret_status
{
    R_NOK,
    R_OK

}ret_status_t;



#endif // _STD_TYPES_H
