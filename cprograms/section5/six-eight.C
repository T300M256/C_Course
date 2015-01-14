//   Todd Moughamer
//   February 24, 2001
//   C/C++ Programming I, 026976, Mitchell
//   6-8
//      
//   Print the larger of two numbers.

#include<iostream>

const double VALUE1 = 110;			// first value to compare
const double VALUE2 = 50;			// second value to compare

double &max(double &val1p, double &val2p)
{
   return(&val1p > &val2p ? val1p : val2p);	// return the larger value
}

int main()
{  
   double val1, val2; 				// declare variables
   
   val1 = VALUE1;				// assign first value
   val2 = VALUE2;				// assign second value
   // print larger value of the two values
   cout<<"Larger of "<<val1<<" and "<<val2<<": "<<max(val1, val2)<<endl;
   return(0);
}
