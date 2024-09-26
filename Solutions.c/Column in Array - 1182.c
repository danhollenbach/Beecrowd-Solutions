#include <stdio.h>
 
int main() {
    int column;
    char op;
    double result = 0, matrix[12][12];
//entradas
    scanf("%d\n", &column);
    scanf("%c", &op);
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &matrix[i][j]);
        }
    }
//processamento
    switch(op){
        case 'S':
            for(int i = 0; i < 12; i++){
                result += matrix[i][column];
            }
            printf("%.1lf\n", result);
            break;
        default:
            for(int i = 0; i < 12; i++){
                result += matrix[i][column];
            }
            printf("%.1lf\n", result/12);
    }


 
    return 0;
}