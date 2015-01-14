/*
 *   Todd Moughamer
 *   January 14, 2001
 *   C/C++ Programming I, 026976, Mitchell
 *   1-5
 *
 *   This program evaluates 3x**3 - 5x**2 + 6 for x = 25 without using
 *   the power function.
 *
 */

#include<stdio.h>

int main(void)
{
   
   float x, answer;

   x = 2.55;
   answer = 3*(x*x*x) - 5*(x*x) + 6;
   printf("The result is: %f\n", answer);
   return(0);
}
