// In this problem your job is to read some positive and integer numbers and print how many times each number appears in the input, 
//you must write each of the distinct values ​​that appear in the input, ordering by ascending value.

// Input
// The input contains only one test case. The first line of input contains one integer N,
// which indicates the quantity of numbers ​​that will be read to X (1 ≤ X ≤ 2000) in the sequence. 
//Each number don't appears more than 20 times in the problem input.

// Output
// Print the output according to the example provided below, indicating how many times each number appears in the input file,
// by ascending order of value.

// Input Sample	  
// 7
// 8
// 10
// 8
// 260
// 4
// 10
// 10

// Output Sample
// 4 aparece 1 vez(es)
// 8 aparece 2 vez(es)
// 10 aparece 3 vez(es)
// 260 aparece 1 vez(es)

#include <stdio.h>

void bubblesort(int arr[], int elements){
    int i, j, temp;
    for(i=0; i < elements; i++){
        for(j=0; j < elements-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void count(int arr[], int elements){
    int i, j, count;
    for(i=0; i<elements; i++){
        count = 0;
        for(j=0; j<elements; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(i == 0 || arr[i] != arr[i-1]){
        printf("%d aparece %d vez(es)\n", arr[i], count);
        }
    }
}

int main()
{
    int elements;

    scanf("%d", &elements);
    int arr[elements];
    //loop de prenchimento do array
    for(int i=0; i < elements; i++){
        scanf("%d", &arr[i]);
    }
    //ordena o array
    bubblesort(arr, elements);
    //conta a frequencia dos elementos
    count(arr, elements);

    return 0;   
}