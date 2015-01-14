//
//   Todd Moughamer
//   January 13, 2001
//   C/C++ Programming I, 026976, Mitchell
//   1-5
//
//   This program evaluates the polynomial 3x**3 - 5x**2 + 6 for x = 25 without
//   using without calling a power function.
//

#include<iostream>

int main()
{
   float x, answer;

   x = 2.55;
   answer = 3*(x*x*x) - 5*(x*x) + 6;
   cout<<"The result is: "<<answer<<endl;
   return(0);
}
