#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    if(a%2==0){
        printf("The number is Even\n");
    }else{
        printf("The number is Odd");
    }
    return 0;
}