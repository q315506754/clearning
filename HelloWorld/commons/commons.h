//
// Created by Jiangli on 2016/7/4.
//

#ifndef HELLOWORLD_COMMONS_H
#define HELLOWORLD_COMMONS_H
#include <stdio.h>
#define  MAX_BYTE 256
#define  LINE_END "\r\n"
#define   MAX(a,b)   a> b? a:b
#define  MIN( x, y ) ( ((x) < (y)) ? (x) : (y) )
#define   MACRO_A(x)   T_##x
//#define   MACRO_B(x)   #@x
#define   MACRO_C(x)   #x

typedef  unsigned char      boolean;     /* Boolean value type. */
typedef  unsigned long int  uint32;      /* Unsigned 32 bit value */
typedef  unsigned short     uint16;      /* Unsigned 16 bit value */
typedef  unsigned char      uint8;       /* Unsigned 8  bit value */
typedef  signed long int    int32;       /* Signed 32 bit value */
typedef  signed short       int16;       /* Signed 16 bit value */
typedef  signed char        int8;        /* Signed 8  bit value */

#endif //HELLOWORLD_COMMONS_H
