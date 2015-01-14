/*
 *   Todd Moughamer
 *   February 7, 2001
 *   C/C++ Programming I, 026976, Mitchell
 *   6-7
 *      
 *   Print the larger of two numbers.
 */

#include<stdio.h>

#define VALUE1 110;				/* first value to compare */
#define VALUE2 50;				/* second value to compare */

double *max(double *val1p, double *val2p)
{
   return(*val1p > *val2p ? val1p : val2p);	/* return the larger value */
}

int main(void)
{  
   double val1, val2; 				/* declare variables */
   
   val1 = VALUE1;				/* assign first value */
   val2 = VALUE2;				/* assign second value */
   /* print larger value of the two values */
   printf("Larger of %f and %f: %f\n", val1, val2, *max(&val1, &val2));
   return(0);
}
