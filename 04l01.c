/* Testing the math library functions */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
   double  x=2.0, m=3.0;   
   printf( "sqrt(%.1f) = %.1f\n", 900.0, sqrt( 900.0 ) );
   printf( "sqrt(%.1f) = %.1f\n", 9.0, sqrt( 9.0 ) );
   printf( "exp(%.1f) = %f\n", 1.0, exp( 1.0 ) );
   printf( "log(%f) = %.1f\n", 2.718282, log( 2.718282 ) );
   printf( "log(%f) = %.1f\n", 7.389056, log( 7.389056 ) );
   printf( "log10(%.1f) = %.1f\n", 1.0, log10( 1.0 ) );
   printf( "log10(%.1f) = %.1f\n", 10.0, log10( 10.0 ) );
   printf( "abs(%2d) = %2d\n", -13, abs( -13 ) );
   printf( "fabs(%.1f) = %.1f\n", -13.5, fabs( -13.5 ) );
   printf( "ceil(%.1f) = %.1f\n", 9.2, ceil( 9.2 ) );
   printf( "ceil(%.1f) = %.1f\n", -9.8, ceil( -9.8 ) );
   printf( "floor(%.1f) = %.1f\n", 9.2, floor( 9.2 ) );
   printf( "floor(%.1f) = %.1f\n", -9.8, floor( -9.8 ) );
   printf( "pow(%.1f, %.1f) = %.1f\n", 2.0, 7.0, pow( 2.0, 7.0 ) );
   printf( "pow(%.1f, %.1f) = %.1f\n", 9.0, 0.5, pow( 9.0, 0.5 ) );
   printf( "exp(pow(%.1f,%.1f) = %f\n", x,m,exp(pow(x,m)) );
   printf( "fmod(%.3f/%.3f) = %.3f\n", 13.675, 2.333, fmod( 13.675, 2.333 ) );
   return 0;
}




