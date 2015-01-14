/*
 *   Todd Moughamer
 *   January 26, 2001
 *   C/C++ Programming I, 026976, Mitchell
 *   2-9
 *   
 *   This program takes a upper case character as input and outputs the
 *   lowercase conversion.
 */

#include<stdio.h>

#define DEC_DIFF 32;

int main(void)
{
   char x;
   int y;
   printf("Enter uppercase character:\n");
   scanf("\n%c", &x);
   printf("Conversion:\n");
   y = (int)x + DEC_DIFF;
   printf("%c\n", y);
   return 0;
}
