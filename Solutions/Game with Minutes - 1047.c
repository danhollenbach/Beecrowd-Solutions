#include <stdio.h>
 
int main() {
 
    int start_h, start_m;
    int final_h, final_m;
    
    scanf("%d %d %d %d", &start_h, &start_m, &final_h, &final_m);
    
    if((final_h == start_h) && (final_m == start_m)){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else{
        if(final_h < start_h){
            final_h += 24;
        }   
        if(final_m < start_m){
            final_m += 60;
            final_h--;
        }
        if(final_h < 0) final_h+=24;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", final_h - start_h, final_m - start_m);
    }   
    
    return 0;
}