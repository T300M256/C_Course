/*
 *   Todd Moughamer
 *   January 26, 2001
 *   C/C++ Programming I, 026976, Mitchell
 *   2-6
 *   
 *   Determines the value of a series of sizeof expressions.
 */

#include<stdio.h>

int main(void)
{
   
   char c_x;
   short s_x;
   int i_x;
   float f_x;

   printf("sizeof(char)                  %u\n", (unsigned int)sizeof(char));
   printf("sizeof(sizeof(char))          %u\n", (unsigned int)sizeof(sizeof(char)));
   printf("sizeof(int)                   %u\n", (unsigned int)sizeof(int));
   printf("sizeof(sizeof(int))           %u\n", (unsigned int)sizeof(sizeof(int)));
   printf("sizeof(float)                 %u\n", (unsigned int)sizeof(float));
   printf("sizeof(sizeof(float))         %u\n", (unsigned int)sizeof(sizeof(float)));
   printf("sizeof(short)                 %u\n", (unsigned int)sizeof(short));
   printf("sizeof(sizeof(short))         %u\n", (unsigned int)sizeof(sizeof(short)));
   printf("sizeof(long)                  %u\n", (unsigned int)sizeof(long));
   printf("sizeof(sizeof(long))          %u\n", (unsigned int)sizeof(sizeof(long)));
   printf("sizeof(double)                %u\n", (unsigned int)sizeof(double));
   printf("sizeof(sizeof(double))        %u\n", (unsigned int)sizeof(sizeof(double)));
   printf("sizeof(long double)           %u\n", (unsigned int)sizeof(long double));
   printf("sizeof(sizeof(long double))   %u\n", (unsigned int)sizeof(sizeof(long double)));
   printf("sizeof(c_x)                   %u\n", (unsigned int)sizeof(c_x));
   printf("sizeof(c_x++)                 %u\n", (unsigned int)sizeof(c_x++));
   printf("sizeof(c_x + 1)               %u\n", (unsigned int)sizeof(c_x + 1));
   printf("sizeof(c_x + s_x * i_x / f_x) %u\n", (unsigned int)sizeof(c_x + s_x * i_x / f_x));
   return 0;
}
