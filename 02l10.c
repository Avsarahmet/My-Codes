/* 
   Class average program with 
   counter-controlled repetition */
#include <stdio.h>
int main(){
   int counter, grade, total;
   
   /* initialization phase */
   total = 0;
   counter = 0;
   
   /* processing phase */
   while ( counter < 5 ) {
      printf( "Enter grade: " );
      scanf( "%d", &grade );
      total += grade;
      counter++;
      
   }
   printf( "Class average is %0.2f\n", (float) total/counter );

   return 0;  
}
