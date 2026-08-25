#include <stdio.h>

int main(){
    int a, fact=1;
    printf("Enter the number:");
    scanf("%d", &a);
    while (a>0){
        fact = fact*a;
        a--;
       
    }
    printf("The factorial of the number is %d\n", fact);

    return 0;
}