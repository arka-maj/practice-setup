#include <stdio.h>

int add(int a, int b){
    int c;
    c = a+b;
    printf("The sum is %d\n", c);
    return 0; 
}

int main(){
    int c,d;
    printf("Enter the numbers:");
    scanf("%d %d", &c, &d);
    add(c,d);
    return 0; 
}