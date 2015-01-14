// Todd Moughamer
// February 7, 2001
// C/C++ Programming I, 026976, Mitchell
// 5-2
// Prints a character on a different number of linse a different number of times
// using differnt functions with the same name.

#include<iostream>

void printLines(char letter, int num_chars, int num_lines)
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

void printLines(char letter, int num_chars)
{
   int rep;

   for(rep = 0; rep < num_chars; ++rep)	        // loop for each character
      cout<<letter;			        // print character
   cout<<"\n";					// start new line
   return;
}

void printLines(char letter)
{
   cout<<letter<<endl;			        // print character
   return;
}

void printLines()
{
   cout<<"Z\n";			        	// print Z
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
