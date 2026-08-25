#include <stdio.h>

int main(){
    int arr[10], sum=0;
    double avg;

    for (int i=0; i<10; i++){
        printf("Enter a number:");
        scanf("%d", &arr[i]);
    }
    for(int j=0; j<10; j++){
        sum = sum + arr[j];
        avg = (double)sum/10;
    }
    printf("The sum and average of elements of the array are %d and %lf\n", sum, avg);
    return 0;
}