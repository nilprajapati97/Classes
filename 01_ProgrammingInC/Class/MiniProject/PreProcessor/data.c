/*
 *      ISO C99 Standard: 7.10/5.2.4.2.1 Sizes of integer types <limits.h>
 */

#ifndef _LIBC_LIMITS_H_
#define _LIBC_LIMITS_H_ 1

#include <features.h>


/* Maximum length of any multibyte character in any locale.
   We define this value here since the gcc header does not define
   the correct value.  */
#define MB_LEN_MAX      16


/* If we are not using GNU CC we have to define all the symbols ourself.
   Otherwise use gcc's definitions (see below).  */
#if !defined __GNUC__ || __GNUC__ < 2

/* We only protect from multiple inclusion here, because all the other
   #include's protect themselves, and in GCC 2 we may #include_next through
   multiple copies of this file before we get to GCC's.  */
# ifndef _LIMITS_H
#  define _LIMITS_H     1

#include <bits/wordsize.h>

/* We don't have #include_next.
   Define ANSI <limits.h> for standard 32-bit words.  */

/* These assume 8-bit `char's, 16-bit `short int's,
   and 32-bit `int's and `long int's.  */

/* Number of bits in a `char'.  */
#  define CHAR_BIT      8

/* Minimum and maximum values a `signed char' can hold.  */
#  define SCHAR_MIN     (-128)
#  define SCHAR_MAX     127

/* Maximum value an `unsigned char' can hold.  (Minimum is 0.)  */
#include<stdio.h>
main()
{
//Printf("hello World");

//printf("hello // abcd\n"); //Hello ABCD

	//	printf("Hello World");
/*
ABCDEFGHIJKLMNOP
*/

}
