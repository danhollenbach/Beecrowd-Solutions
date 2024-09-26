#include <stdio.h>

int main(){
    int n, min, pos;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(i == 0){
            min = arr[i];
            pos = i;
        }
        if(arr[i] < min){
            min = arr[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", min, pos);
    
    return 0;   
}