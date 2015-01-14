/*
 *   Todd Moughamer
 *   February 23, 2001
 *   C/C++ Programming I, 026976, Mitchell
 *   6-5
 *      
 *   Takes three numbers and doubles their value using a separate function.
 */

#include<stdio.h>
#include<stdlib.h>

void doubleIt(int *ip, float *fp, double *dp)
{
   *ip *= 2;				/* double value of *ip */
   *fp *= 2;				/* double value of *fp */
   *dp *= 2;				/* double value of *dp */
   return;
}

int main(void)
{  
   int i = 23;
   float f = 34.25f;
   double d = 6e26;
   
   doubleIt(&i, &f, &d);		/* double values with a function */
   printf("%d, %f, %e\n", i, f, d);	/* print the new values */
   return(EXIT_SUCCESS);
}
