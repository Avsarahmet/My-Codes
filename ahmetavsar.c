#include<stdio.h>
#include<math.h>

double func ( double );

int main () {
  int iteration=50,i=0;
  double epsilon = 1E-12, h=1E-3;
  double x0=0;
  double x1=0.5;
while(fabs(x1-x0)>epsilon && i<iteration){
  x0=x1;
  x1=x0-func(x0)/((func(x0+h)-func(x0))/h);
  i++;
}
  if(i<iteration)
  printf("the total number of iteration is %d and root is %f\n",i,x1);
  else
  printf("the number of iteration exceeds max iteration\n");
}

double func (double x){

//return(pow(x,7.0)+4*pow(x,3.0)+12);
//return(log(x)-exp(-3*x));
//return(cos(x)-x*x);
//return(exp(sin(x))+x);
//return(log10(1+x)-x*x);
return(x*x-1);
}
