#include<iostream>

int main()
{  
   static int save[] = {1, 2, 3, 4};
   int i;
   
   for(i = 0; i < 10; ++i)
      cout<<save[i]<<" ";
   return(0);
}
