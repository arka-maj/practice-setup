#include <stdio.h>

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    switch((n>0)-(n<0)){
        case 1:
            printf("The number is positive\n");
            break;
        case -1:
            printf("The number is negative\n");
            break;
        default:
            printf("The number is 0\n");
            break;
    }
    return 0;
}