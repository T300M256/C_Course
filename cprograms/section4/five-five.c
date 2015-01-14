/*
 *   Todd Moughamer
 *   February 7, 2001
 *   C/C++ Programming I, 026976, Mitchell
 *   5-5
 *      
 *   Prompts user for two integers and returns their sum and product.
 */

#include<stdio.h>

int getSum(int, int);			/* prototype sum function */
int getProduct(int, int);		/* prototype product function */

int main(void)
{  
   int val1, val2;		        /* declare variables */
      
   while(1)
   {
      printf("Input two integers:\n");	/* prompt user */
      scanf("\n%d%d", &val1, &val2);	/* get input */
      /* print product value */
      printf("Product of %d and %d: %d\n", val1, val2, getProduct(val1, val2));
      /* print smaller value */
      printf("Sum of %d and %d: %d\n", val1, val2, getSum(val1, val2));
   }  
   return(0);
}
