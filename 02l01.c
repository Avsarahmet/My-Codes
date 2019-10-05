/* Use arithmetic assignment operators */
#include <stdio.h>

int main(){
   int x, y, z;

   x = 1;
   y = 2;   
   printf("Given x = %d, and y = %d,\n", x, y);
   x = x + y;
   printf("x = x + y  assigns %d to x.\n", x);
   
   x = 1;
   printf("Given x = %d, and y = %d,\n", x, y);
   x += y;    // x=x+y
   printf("x += y  assigns %d to x.\n", x);

   x = 5;
   printf("Given x = %d, and y = %d,\n", x, y);
   x -= y;     // x=x-y
   printf("x -=  y  assigns %d to x. \n", x);

   z = 10;
   printf("Given z = %d, and y = %d,\n", z, y);
   z /= y;    // z=z/y
   printf("z /= y  assigns %d to z.\n", z);

   z = 10;
   printf("Given z = %d, x = %d ,and y = %d,\n", z, x, y);
   z *= x + y;     // z=z * (x + y) 
   printf("z *= x + y assigns %d to z.\n", z);
   
   printf("Given x = %d ,and y = %d,\n", x, y);
   x %= y;     // x=x%y 
   printf("x %%= y assigns %d to x.\n", x);
   return 0;
} 
