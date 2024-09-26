#include <stdio.h>

int main(){
 
    double array[100];

    for (int i = 0; i < 100; i++){
        if(i == 0){
            scanf("%lf", &array[0]);
        }else{
        array[i] = array[i-1] / 2;
        }
    }
    for(int i = 0; i < 100; i++){
        printf("N[%d] = %.4lf\n", i, array[i]);
    }  

}