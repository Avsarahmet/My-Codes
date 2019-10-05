#include<stdio.h>
int main(){
    int i,j,x;
    x=0;
    for ( i=2; i < 5 ; i+=2 ){
        for ( j=4; j > 0 ; j-- ){
            if ( (i+j)%2==0 ) 
                continue;
            else {   
                x+=i+j;
                printf(" i+j=%d \n",i+j);
            }
        }
    }           
    printf(" x=%d \n",x);
    return 0;  
}
