/*
 *   Todd Moughamer
 *   February 7, 2001
 *   C/C++ Programming I, 026976, Mitchell
 *   5-5
 *      
 *   Prompts user for two integers and returns their sum and product.
 */

#include<stdio.h>

int main(void)
{  
   static int save[] = {1, 2, 3, 4};
   int i;
   
   for(i = 0; i < 6; ++i)
      printf("%d\n", save[i]);
   return(0);
}
