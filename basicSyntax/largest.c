#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>=b && a>=c){
        printf("The first number is the largest!\n");
    }
    else if(b>=a && b>=c){
        printf("The second number is the largest!\n");
    }
    else{
        printf("The third number is the largest!\n");
    }

    return 0;
}