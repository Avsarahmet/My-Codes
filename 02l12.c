/* Use of conditional operator */
#include <stdio.h>

int main()
{
    
   int x=5,y=7,z=10,m;
   m=x > 3 ? y : z;
   // if x > 3 is true, the value of y else the value of z will be assigned to m.
   printf( " %d\n", m ); // since  x > 3 is true the value of y will be assigned to m.
   // The result of the expression ( x > 3 ? y : z ) can be printed directly 
   printf( " %d\n", x > 3 ? y : z );  
   x=2;
   m=x > 3 ? y : z;
   printf("%d\n", m ); // since  x > 3 is false, the value of z will be assigned to m. 
         
   return 0;

}
