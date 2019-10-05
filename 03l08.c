/* Use the logical OR operator */
#include <stdio.h>

int main(){
   int num=0; 
   for (; (num%2 == 0) || (num%3 == 0); ){
       printf(" %d can be divided by 2 or 3\n", num);
       printf("Enter an integer number ? : ");      
       scanf("%d",&num);
   }      
   
   printf(" %d can not be divided by 2 or 3\n", num);
   
   return 0;
   
}





