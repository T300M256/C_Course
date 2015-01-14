/*
 *   Todd Moughamer
 *   February 7, 2001
 *   C/C++ Programming I, 026976, Mitchell
 *   5-1
 *   
 *   Prints a character a user specified number of times on a user specified
 *   number of lines using a function.
 */

#include<stdio.h>

void printLines(char letter, int num_chars, int num_lines)
{
   int line, rep;
   
   for(line = 0; line < num_lines; ++line)	/* loop for each line */
   {
      for(rep = 0; rep < num_chars; ++rep)	/* loop for each character */
         printf("%c", letter);			/* print character */
      printf("\n");				/* start new line */
   }
   return;
}

int main(void)
{
   char character;
   int char_reps, line_reps;
   
   printf("Enter character:\n");		/* prompt user */
   scanf("\n%c", &character);			/* get character to print */
   printf("Number of characters:\n");		/* prompt user */
   scanf("\n%d", &char_reps);			/* get num of chars to print */
   printf("Number of lines:\n");		/* prompt user */
   scanf("\n%d", &line_reps);			/* get num of lines to print */
   printLines(character, char_reps, line_reps); /* call printLines function */
   return(0);
}
