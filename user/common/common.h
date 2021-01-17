#ifndef __COMMON_H__
#define __COMMON_H__

#include "stm32f4xx.h"		//M4单片机头文件

#include "io_bit.h"
	
typedef unsigned char 		u8;
typedef char				s8;
typedef unsigned short		u16;
typedef short				s16;
typedef unsigned int		u32;
typedef int					s32;
typedef unsigned long long	u64;
typedef	long long			s64;

#define MAX( x, y )			(((x) > (y)) ? (x) : (y))
#define MIN( x, y )			(((x) < (y)) ? (x) : (y))

// 返回一个比x大的最接近的8的倍数
#define RND8( x )			((((x) + 7) / 8 ) * 8)

// 将一个字母转换为大写
#define UPCASE( c )			(((c) >= 'a' && (c) <= 'z') ? ((c) - 0x20) : (c))

// 将一个十进制字符转换为数字
#define CTOD( c )			(((c) >= '0' && (c) <= '9') ? ((c) - 0x30) : (c))

// 判断字符是不是16进制的数字
#define HEXCHX( c )			(((c) >= '0') && (c) <= '9') ||\
							((c) >= 'A' && (c) <= 'F') ||\
							((c) >= 'a' && (c) <= 'f'))

// 防止溢出
#define INC_SAT( val )		(val = ((val) + 1 > (val)) ? (val + 1) : (val))

// 返回数组元素的个数
#define ARR_SIZE( a )		(sizeof((a)) / sizeof((a[0])))

#define MACR_OFF		0
#define MACR_ON			1

#define MACR_FALSE		0
#define MACR_TRUE		1



#endif

