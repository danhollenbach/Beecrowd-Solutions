#include <stdio.h>
 
int main() {
    int i, j;
    char op;
    double result = 0, matrix[12][12];

//entradas
    scanf("%c", &op);
    
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &matrix[i][j]);
        }
    }

//processamento

    for(i = 0; i < 12; i++){
            for(j = 0; j < 12; j++){
                if((j > i) && (j < (11 - i))){
                    result += matrix[i][j];
                }
            }
        }

    if(op == 'S'){
        printf("%.1lf\n", result);
    }else{  
            printf("%.1lf\n", result/30);
    }
    return 0;
}