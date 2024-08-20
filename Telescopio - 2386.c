#include <stdio.h>
int main(){
    int a, n; 

    // abertura do telescopio mm2
    scanf("%d", &a);
    // numero de estrelas
    scanf("%d", &n);
    // vetor de fluxo de luz para cada estrela
    int f[n];

    //preenche o vetor
    for ( int i = 0; i < n; i++)
    {
        scanf("%d", &f[i]);
    } 

    int count = 0;
    //verifica se a estrela é visivel
    for ( int idx = 0; idx < n; idx++)
    {
        if ( a * f[idx] >= 40000000)
        {
            count++;
        }
    }
    printf("%d\n", count);


}