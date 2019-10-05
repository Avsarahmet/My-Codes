/* Use nested if statements */
#include <stdio.h>
int main(){
    int x;
    printf("Enter an integer number ? : ");
    scanf("%d",&x);
    if (x > 0){
        if (x%2 == 0)
            printf("%d is an even number.\n", x); 
        else
            printf("%d is an odd number.\n", x);
    }
    else if (x == 0)
        printf("The number is zero.\n");
    else 
        printf("%d is a negative number \n", x);
    
    return 0;
}



