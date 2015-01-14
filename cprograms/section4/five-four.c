/*
 *   Todd Moughamer
 *   February 7, 2001
 *   C/C++ Programming I, 026976, Mitchell
 *   5-4
 *      
 *   Print the larger and smaller of two numbers.
 */

#include<stdio.h>

#define VALUE1 110;					 /* first value to compare */
#define VALUE2 50;				  	 /* second value to compare */

double max(double, double);				 /* prototype max function */
double min(double, double);				 /* prototype min function */

int main(void)
{  
   double a , b;					 /* declare variables */
   a = VALUE1;						 /* initialize a */
   b = VALUE2;						 /* initialize b */
   printf("Larger of %f and %f: %f\n", a, b, max(a,b));	 /* print larger value */
   printf("Smaller of %f and %f: %f\n", a, b, min(a,b)); /* print smaller value */
   return(0);
}
