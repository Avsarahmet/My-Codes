/*  Use the switch-break statement */
#include <stdio.h>
int main(){
    int day;
    printf("Please enter a single digit for a day\n");
    printf("(within the range of 1 to 7):\n");
    scanf("%d",&day);
    switch (day){
        case 1: case 4: case 5:
            printf("case 1 4 5.\n");
            break;
        case 2: case 7:
            printf("case 2 7.\n");
            break;
        case 3: case 6:
            printf("case 3 6.\n");
            break;
        default:
            printf("The digit is not within the range of 1 to 7.\n");         
            break;
   }
   return 0;
}
