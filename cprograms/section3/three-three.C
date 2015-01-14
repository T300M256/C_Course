//
//   Todd Moughamer
//   February 4, 2001
//   C/C++ Programming I, 026976, Mitchell
//   3-3
//
//   This program will creates a table of the first 20 factorals.
//

#include <iostream>

const int NUM_FACTORALS = 20;

int main()
{
   int number, iteration;
   double factoral;
   for(number = 1; number <= NUM_FACTORALS; number++)
   {
      for(iteration = 1, factoral = 1; iteration <= number; iteration++)
         factoral *= iteration;
      cout<<number<<"! = "<<factoral<<endl;
   }
   return(0);
}