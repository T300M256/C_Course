//
//   Todd Moughamer
//   February 4, 2001
//   C/C++ Programming I, 026976, Mitchell
//   3-6B
//
//   Reverses the order of inputed integer.
//

#include <iostream>

int main()
{
   int number, number_in, digit;
   cout<<"Input an integer value:\n";	// prompt user for integer value
   cin>>number_in;			// input value
   if(number_in < 0) 			// see if integer is negative
      number = number_in * -1;		// if so make it positive use that value
   else
      number = number_in;		// put the input value in the working variable
   if(number == 0)			// see if input was a 0
      cout<<number<<endl;		// just print out a zero
   else					// otherwise reverse the order
   {
      while (number >= 1)
      {
         digit = number % 10;		// take the modulus of the number
         cout<<digit;			// print the remainder
         number = (number - digit)/10;	// chop off the last digit
      }
      if(number_in < 0)			// see if input value was negative
         cout<<"-\n";			// print a minus and a new line
      else				// see if input value was positve
         cout<<"\n";			// only print a newline
   }
   return(0);
}