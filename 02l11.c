#include<stdio.h>
int main(){
    int  sum=0,n ;
    n=20;
    while(  n >= 0){    
         while( n%3 == 0 && n%5 != 0 ){
             printf(" n=%2d \n",n);
             sum+=n;
             break;          
         }
         n--;
    }
    printf(" sum =%2d \n",sum);
    return 0;  
}





