/*
 *   Todd Moughamer
 *   February 4, 2001
 *   C/C++ Programming I, 026976, Mitchell
 *   3-5
 *   
 *   Prompts user for a negative integer and if a positive integer is 
 *   given continue prompt until a negative integer is given. If something
 *   else is input continue to prompt.
 */

#include<stdio.h>

int main(void)
{
   int number;
   do
   {
      printf("Input negative integer:\n");
      scanf("\n%d", &number) || number = 1;
   } while (number >= 0);
   return 0;
}
