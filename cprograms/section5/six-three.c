/*
 *   Todd Moughamer
 *   February 23, 2001
 *   C/C++ Programming I, 026976, Mitchell
 *   6-3
 *      
 *   Prompts up to 500 users for an integer between 1-10 and quits if a
 *   negative value is entered and prints the number of times each
 *   integer was selected.
 */

#include<stdio.h>

#define ENTRY_LIMIT 500
#define UPPER_LIMIT 10 

int main(void)
{  
   static int numbers[UPPER_LIMIT];
   int number, x, counter = 0;
   
   while(counter < ENTRY_LIMIT)
   {
      /* prompt user for input */
      printf("Input an integer between 1 and %d:\n", UPPER_LIMIT);
      scanf("%d", &number);		    /* get input */
      if(number < 0)			    /* if the number is negative use */
         counter = ENTRY_LIMIT;		    /* counter as a flag to terminate */
      else if(number <= UPPER_LIMIT)	    /* else if number is in range */
      {
         numbers[number] += 1;		    /* count the occurrence of it */
	 counter++;			    /* count the number valid entries */
      }
   } 
   printf("Rating\tNumber of Responses\n"); /* print table header */
   for(x = 1; x <= UPPER_LIMIT; x++)	    /* run through range of entries */
   {
      printf("%d\t%d\n", x, numbers[x]);    /* print entry and occurrences */
   }
   return(0);
}
