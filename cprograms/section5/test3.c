/*
 *   Todd Moughamer
 *   February 7, 2001
 *   C/C++ Programming I, 026976, Mitchell
 *   6-7
 *      
 *   Print the larger of two numbers.
 */

#include<stdio.h>

#define VALUE1 110;					 /* first value to compare */
#define VALUE2 50;				  	 /* second value to compare */

/* #define maximum(A,B) ((A)>(B)?(A):(B))     function like macro return larger val */

double *sum(double value1, double value2)
{
   static double sumVal;
   sumVal = value1 + value2;
   return(&sumVal);
}

int main(void)
{  
   double val1, val2;
   double *sumVal;
   val1 = VALUE1;
   val2 = VALUE2;
   sumVal = sum(val1, val2);
   printf("Sum of %f and %f: %f\n", val1, val2, *sumVal);  /* print larger value */
   return(0);
}
