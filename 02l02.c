/*  pre- or post-increment(decreement) operators */
#include <stdio.h>

int main(){                            
   int w, x, y, z, result;
   
   w = x = y = z = 1;   /* initialize x , y, w, and z */
   printf("Given w = %d, x = %d, y = %d, and z = %d,\n", w, x, y, z);
   
   result = ++w;
   printf("++w gives: %d  w=%d \n", result, w);
  
   result = x++;
   printf("x++ gives: %d  x=%d \n", result, x);
   
   result = --y;
   printf("--y gives: %d  y=%d \n", result, y);
   
   result = z--;
   printf("z-- gives: %d  z=%d \n", result, z);   
   return 0;
}
