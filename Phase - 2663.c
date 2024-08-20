#include <stdio.h>

void bubblesort(int contestants, int *scores){
    int temp;
    for(int i = 0; i < contestants; i++){
        for(int j = 0; j < contestants - 1; j++){
            if(scores[j] > scores[j + 1]){
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
}

void checkPass(int contestants, int *scores, int min){
    int pass = 0;

    for(int i = 0; i < contestants; i++){
        if(scores[i] >= min){
            pass++;
        }
    }

    printf("%d\n", pass);
}

int main(){
    int contestants, min;

    scanf("%d", &contestants);
    int scores[contestants];

    scanf("%d", &min);

    for(int i = 0; i < contestants; i++){
        scanf("%d", &scores[i]);
    }
    
    bubblesort(contestants, scores);

    min = scores[contestants - min];
    
    checkPass(contestants, scores, min);
    
    return 0;
}