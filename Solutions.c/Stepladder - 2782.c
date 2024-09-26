#include <stdio.h>
int arrayFill(int arr[], int size){
    int i;
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    return arr;
}

long long int checkStepladder(int arr[], int size){
    int i;
    long long int count = 1;

    
        
        int last = arr[0] - arr[1];
        int current;

        for(i = 2; i < size; i++){
            current = arr[i - 1] - arr[i];
            if(current != last){
                last = current;
                count++;
            }
        }
        return count;

}

int main(){
    int size;

    scanf("%d", &size);

    int arr[size];

    arrayFill(arr, size);
    printf("%lld\n", checkStepladder(arr, size));
}