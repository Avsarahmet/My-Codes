/* Using the relational and logical operators with if-else */
#include <stdio.h>
int main(){
   int n;
   while(1){
       printf("Enter an integer number ? : ");
       scanf("%d",&n);
       if (n%2 == 0 && n%3 == 0)
           printf("%d can be divided by both 2 and 3\n", n);
       else if (n%2 == 0 || n%3 == 0)
               printf("%d can be divided by 2 or 3\n", n);
       else 
            printf("%d can not be divided by both 2 and 3\n", n);      
   }
   return 0;
}









