//
//   Todd Moughamer
//   January 26, 2001
//   C/C++ Programming I, 026976, Mitchell
//   2-8
//
//   This program takes a upper case character as input and outputs the
//   lowercase conversion using the cin.get and cout.put methods.
//

#include <iostream>

const int DEC_DIFF = 32;

int main()
{
   char x;
   int y;
   cout<<"Enter uppercase character:\n";
   cin.get(x);
   cout<<"Conversion:\n";
   y = int(x) + DEC_DIFF;
   cout.put(y);
   return(0);
}
