# include <stdio.h>

int main(){
    int n; 
    int even[5], odd[5];
    int even_idx = 0, odd_idx = 0;

    for(int i = 0; i < 15; i++){
        scanf("%d", &n);
        if(n % 2 == 0){
            even[even_idx] = n;
            even_idx++;
            if(even_idx == 5){
                for(int j = 0; j < 5; j++){
                    printf("par[%d] = %d\n", j, even[j]);
                    even[j] = 0;
                }
                even_idx = 0;
            }
        } else {
            odd[odd_idx] = n;
            odd_idx++;
            if(odd_idx == 5){
                for(int j = 0; j < 5; j++){
                    printf("impar[%d] = %d\n", j, odd[j]);
                    odd[j] = 0;
                }
                odd_idx = 0;
            }
        }
    }
    for(int a = 0; a < odd_idx; a++){
        printf("impar[%d] = %d\n", a, odd[a]);
    }
    for(int b = 0; b < even_idx; b++){
        printf("par[%d] = %d\n", b, even[b]);
    }
}