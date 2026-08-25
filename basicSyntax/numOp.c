#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,sum, diff, pro;
    float div;
    printf("Enter the numbers:");
    scanf("%d %d", &a,&b);
    if (b==0){
        printf("Enter suitable second number\n");
    }else{
        sum = a+b;
        diff = a-b;
        pro = a*b;
        div = (float)a/b;
        printf("Sum is %d\n Difference is %d\n Product is a %d\n Division is %f\n", sum, diff, pro, div );
    }
}