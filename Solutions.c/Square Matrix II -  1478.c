#include <stdio.h>
#include <stdlib.h>

    int main() {
        int input = 1;

         while (1) {
            scanf("%d", &input);
            if(input == 0) break;
            for (int i = 0; i < input; i++) {
                for (int j = 0; j < input; j++) {
                    if(j == input - 1) {
                        printf("%3d", abs(i - j) + 1);
                        } else{
                    printf("%3d ", abs(i - j) + 1);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }

        return 0;
    }