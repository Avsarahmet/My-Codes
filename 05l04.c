#include<stdio.h>
#include<stdlib.h>
int main(){
  const int x=15;
     x=7;       // It is wrong since x has a const modifier
    printf("%d \n",x);               
    return 0;         
}
