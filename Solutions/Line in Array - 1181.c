#include <stdio.h>
 
int main() {
    int line;
    char op;
    double result = 0, matrix[12][12];
//entradas
    scanf("%d\n", &line);
    scanf("%c", &op);
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &matrix[i][j]);
        }
    }
//processamento
    switch(op){
        case 'S':
            for(int j = 0; j < 12; j++){
                result += matrix[line][j];
            }
            printf("%.1lf\n", result);
            break;
        default:
            for(int j = 0; j < 12; j++){
                result += matrix[line][j];
            }
            printf("%.1lf\n", result/12);
    }


 
    return 0;
}