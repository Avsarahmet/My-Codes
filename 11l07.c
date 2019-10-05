#include <stdio.h>
int main(){
   int i, j, num;
   int ARR[3][4]={ {1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12} };
   FILE *fptr; 
   fptr = fopen("fil1","w") ;
   for (i=0 ; i < 3; i++)
       for (j=0 ; j < 4; j++) {
           if (ARR[i][j]%2==0)
               fprintf(fptr,"%d\n" ,ARR[i][j]);
       }     
   fclose(fptr);         
   fptr = fopen("fil1","r") ;
   while(!feof(fptr)){
        fscanf(fptr,"%d\n",&num);
        printf("%2d\n" ,num); 
   } 
   fclose(fptr);  
   return 0; 
}
