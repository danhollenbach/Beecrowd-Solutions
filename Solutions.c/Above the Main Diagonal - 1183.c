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
    switch(op){
        case 'S':
           for(i = 0; i < 12; i++){
                for(j = 0; j < 12; j++){
                    if(j > i){
                        result += matrix[i][j];
                }
            }
            printf("%.1lf\n", result);
            break;
        default:
            for(i = 0; i < 12; i++){
                for(j = 0; j < 12; j++){
                    if(j > i){
                        result += matrix[i][j];
                    }
                }
            }
        }
            printf("%.1lf\n", result/66);
    }


 
    return 0;
}