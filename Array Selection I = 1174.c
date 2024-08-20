#include <stdio.h>

int main(){
    double arr[102];
    for(int i = 0; i < 100; i++){
        scanf("%lf", &arr[i]);
    }
    for(int i = 0; i < 100; i++){
        if(arr[i] <= 10){
            printf("A[%d] = %.1lf\n", i, arr[i]);
        }
    }
}