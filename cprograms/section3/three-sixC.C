//
//   Todd Moughamer
//   February 4, 2001
//   C/C++ Programming I, 026976, Mitchell
//   3-6C
//
//   Print the digits on an integer in english.
//

#include <iostream>

int main()
{
   int number, number_in, digit, reverse_number = 0;
   cout<<"Input an integer value:\n";	// prompt user for integer value
   cin>>number_in;			// input value
   if(number_in < 0) 			// see if integer is negative
      number = number_in * -1;		// if so make it positive use that value
   else
      number = number_in;		// put the input value in the working variable
   if(number == 0)			// see if input was a 0
      cout<<"zero"<<endl;		// just print out zero
   else					// otherwise reverse the order
   {
      while (number >= 1)
      {
         digit = number % 10;		// take the modulus of the number
         number = (number - digit)/10;	// chop off the last digit
	 reverse_number *= 10;		// build the digits back into the input number
	 if(digit != 0)
	    reverse_number += digit;
      }
      number = reverse_number;		// make number the reversed order
      if(number_in < 0)			// see if input value was negative
         cout<<"minus ";		// print minus
      while (number >= 1)
      {
         digit = number % 10;		// take the modulus of the number
         if (digit == 0)		// determine which digit it is
            cout<<"zero ";		// and print it in english
         else if (digit == 1)
	    cout<<"one ";
	 else if (digit == 2)
	    cout<<"two ";
	 else if (digit == 3)
	    cout<<"three ";
         else if (digit == 4)
	    cout<<"four ";
	 else if (digit == 5)
	    cout<<"five ";
	 else if (digit == 6)
	    cout<<"six ";
	 else if (digit == 7)
	    cout<<"seven ";
	 else if (digit == 8)
	    cout<<"eight ";
	 else
	    cout<<"nine ";
         number = (number - digit)/10;	// chop off the last digit
      }
      cout<<"\n";			// print a newline
   }
   return(0);
}