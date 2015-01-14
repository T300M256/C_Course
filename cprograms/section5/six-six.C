//   Todd Moughamer
//   February 23, 2001
//   C/C++ Programming I, 026976, Mitchell
//   6-6
//      
//   Takes three numbers and doubles their value using a separate function
//   that uses references as parameter.

#include<iostream>

void doubleIt(int &ir, float &fr, double &dr)
{
   ir *= 2;				// double the int
   fr *= 2;				// double the float
   dr *= 2;				// double the double
   return;
}

int main()
{  
   int i = 23;
   float f = 34.25f;
   double d = 6e26;
   
   doubleIt(i, f, d);			// double the values with a function
   cout<<i<<", "<<f<<", "<<d<<endl;	// print the new values
   return(0);
}
