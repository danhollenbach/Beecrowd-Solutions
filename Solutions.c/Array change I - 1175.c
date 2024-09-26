#include <stdio.h>
void changePosition(int *arr, int n){
    int aux;
    for(int i = 0; i < n/2; i++){
        aux = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = aux;
    }

    for(int i = 0; i < n; i++){
        printf("N[%d] = %d\n", i, arr[i]);
    }
}

int main(){
    int arr[22];
    for(int i = 0; i < 20; i++){
        scanf("%d", &arr[i]);
    }
    changePosition(arr, 20);
}