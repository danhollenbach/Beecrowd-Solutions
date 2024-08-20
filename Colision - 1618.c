#include <stdio.h>

int main() {
    int n, matriz[10];

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for (int i = 0; i < 10; i++) {
            scanf("%d", &matriz[i]);
        }
         if ((matriz[8] >= matriz[0]) && (matriz[8] <= matriz[2]) && (matriz[8] <= matriz[4]) && (matriz[8] >= matriz[6]) && (matriz[9] >= matriz[1]) && (matriz[9] >= matriz[3]) && (matriz[9] <= matriz[5]) && (matriz[9] <= matriz[7])) {
            printf("1\n");
        }
        else{
            printf("0\n");
        }
    }

    return 0;
}