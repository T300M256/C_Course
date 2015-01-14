//
//   Todd Moughamer
//   January 26, 2001
//   C/C++ Programming I, 026976, Mitchell
//   2-9
//
//   This program takes a upper case character as input and outputs the
//    lowercase conversion without using the cin.get method.
//

#include <iostream>

const int DEC_DIFF = 32;

int main()
{
   char x;
   int y;
   cout<<"Enter uppercase character:\n";
   cin>>x;
   cout<<"Conversion:\n";
   y = int(x) + DEC_DIFF;
   cout.put(y);
   return(0);
}

