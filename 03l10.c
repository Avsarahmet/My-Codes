/* Nested two while loop kullanarak 03l09.c programinin yeniden
            yazilmasi  */
#include<stdio.h>
int main(){
    int i=2,j,x=0;
    while( i < 5  ){
	j=4;	
	while( j > 0 ){
            if ( (i+j)%2!=0 ){ 
                x+=i+j;
                printf(" i+j=%d \n",i+j);
            }
            j--;
        }
        i+=2;
    }           
    printf(" x=%d \n",x);
    return 0;  
}
