#ifndef __COMMON_H__
#define __COMMON_H__

#include "stm32f4xx.h"		//M4��Ƭ��ͷ�ļ�

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

// ����һ����x�����ӽ���8�ı���
#define RND8( x )			((((x) + 7) / 8 ) * 8)

// ��һ����ĸת��Ϊ��д
#define UPCASE( c )			(((c) >= 'a' && (c) <= 'z') ? ((c) - 0x20) : (c))

// ��һ��ʮ�����ַ�ת��Ϊ����
#define CTOD( c )			(((c) >= '0' && (c) <= '9') ? ((c) - 0x30) : (c))

// �ж��ַ��ǲ���16���Ƶ�����
#define HEXCHX( c )			(((c) >= '0') && (c) <= '9') ||\
							((c) >= 'A' && (c) <= 'F') ||\
							((c) >= 'a' && (c) <= 'f'))

// ��ֹ���
#define INC_SAT( val )		(val = ((val) + 1 > (val)) ? (val + 1) : (val))

// ��������Ԫ�صĸ���
#define ARR_SIZE( a )		(sizeof((a)) / sizeof((a[0])))

#define MACR_OFF		0
#define MACR_ON			1

#define MACR_FALSE		0
#define MACR_TRUE		1



#endif

