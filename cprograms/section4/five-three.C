// Todd Moughamer
// February 7, 2001
// C/C++ Programming I, 026976, Mitchell
// 5-3
// Prints a character on a different number of linse a different number of times
// using differnt a single function with default arguments.

#include<iostream>

void printLines(char letter = 'Z', int num_chars = 1, int num_lines = 1)
{
   int line, rep;
   
   for(line = 0; line < num_lines; ++line)	// loop for each line
   {
      for(rep = 0; rep < num_chars; ++rep)	// loop for each character
         cout<<letter;			        // print character
      cout<<"\n";				// start new line
   }
   return;
}

int main()
{  
   printLines('W', 20, 10);			// print using first function
   printLines('X', 10);				// print using second function
   printLines('Y');				// print using third function
   printLines();				// print using fourth function
   return(0);
}
