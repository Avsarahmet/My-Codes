#include <stdio.h>
int main(){
   int i=0,s=0;
   int arr[50];
   FILE *fptr; 
   fptr = fopen("num.data","r") ;
   while(!feof(fptr)){
      fscanf(fptr,"%d",&arr[s]);
      s++;
   }
    for (i=0; i < s;i++)
         printf(" %d ",arr[i]);
    printf("\n");    
    return 0; 
}
