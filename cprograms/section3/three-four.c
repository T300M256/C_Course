/*
 *   Todd Moughamer
 *   February 4, 2001
 *   C/C++ Programming I, 026976, Mitchell
 *   3-4
 *   
 *   Prompts user for a negative integer and if a positive integer is 
 *   given continue prompt until a negative integer is given.
 */

#include<stdio.h>

int main(void)
{
   int number;
   do
   {
      printf("Input negative integer:\n");	/* prompt user */
      scanf("\n%d", &number);			/* get input */
   } while (number >= 0);			/* loop until a negative number is given */
   return 0;
}
