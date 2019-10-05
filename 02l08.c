/*  Using the relational and logical operators with if statement */
#include <stdio.h>
int main(){
   int a,b;
   while(1){
       printf("Enter two integers ? : ");
       scanf("%d %d",&a,&b);
       if ( (a-b) !=0 && (a+b)%3 == 0 && !((a+b) > 10) )
           printf("%d %d\n", a,b);
   }
   return 0;
}









