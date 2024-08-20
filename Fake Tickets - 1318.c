// Input
// The input contains data for several test cases. 
// Each test case has two lines. 
// The first line contains two integers N and M which 
// indicate respectively the number of original tickets
// and the number of persons attending the party 
// (1 ≤ N ≤ 10000 and 1 ≤ M ≤ 20000). 
// The second line of a test case contains M integers Ti, 
// representing the ticket numbers in the pack the director gave you (1 ≤ Ti ≤ N). the end of input is indicated by (N = M = 0).

// Output
// For each test case your program should print one line, containing the number of tickets in the pack that had another ticket with the same sequence number.

// Sample Input	                Sample Output
// 5 5                          1
// 3 3 1 2 4
// 6 10                         4
// 6 1 3 6 6 4 2 3 1 2
// 0 0

#include <stdio.h>
int bubblesort(int arr[], int elements){
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

int main(){
    int n, m;

    scanf ("%d %d", &n, &m);
    while (n != 0 && m != 0){
        int arr[m];
        int count = 0;

        // array filling
        for (int i = 0; i < m; i++){
            scanf ("%d", &arr[i]);
        }
        // sorting the array
        bubblesort(arr, m);

        // counting appears in the array
        for (int i = 0; i < m; i++){
            if (arr[i] == arr[i+1]){
                count++;
                while (arr[i] == arr[i+1])
                {
                    i++;
                }
                               
            }
        }

        printf ("%d\n", count);
        scanf ("%d %d", &n, &m);
    }

}