#include <stdio.h>
int main(){
   int sw; 
   printf ("Enter CHOICE ? : ");  
   scanf("%d",&sw); 
   switch (sw) {
       case 1:
            printf ("CASE : %d\n",sw);
            break;
       case 2:
            printf ("CASE : %d\n",sw);
            break;
       case 3:
            printf ("CASE : %d\n",sw);
            break;
       default :
            printf ("WRONG CHOICE try again\n");
            break;
   }
   return 0;
}


