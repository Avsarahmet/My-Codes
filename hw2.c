#include<stdio.h>
#include<time.h>
void print(int X[][9]){
int i,j;
for(i=0;i<7;i++){
  for(j=0;j<9;j++){
   printf("%7d",X[i][j]);
    }
  printf("\n");
  }
printf("\n");
}
void reverse(int X[][9],int Y[][9]){
int i,j,reverse,value,last;
for(i=0;i<7;i++){
  for(j=0;j<9;j++){
    value=X[i][j];
    reverse=0;
    while(value>9){
      last=value%10;
      value=value/10;
      reverse=reverse*10+last;
      }
    reverse=reverse*10+value;
    Y[i][j]=reverse;
    }
  }
}
int main() {
int A[7][9];
int B[7][9];
int i,j;
srand(time(NULL));
for(i=0;i<7;i++){
  for(j=0;j<9;j++){
    A[i][j]=((rand() % 495001)+5000);
    }
  }
print(A);
reverse(A,B);
print(B);
return 0;
}
