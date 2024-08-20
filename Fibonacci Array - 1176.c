#include <stdio.h>

    long long int fibonacci(int n){
        long long int fib[n];
        fib[0] = 0;
        fib[1] = 1;
        for(int i=2; i<=n; i++){
            fib[i] = fib[i-1] + fib[i-2];
        }
        return fib[n];
    }

    int main(){
        int n;
        int runtime;

        scanf("%d",&runtime);
        for(int i=0; i<runtime ; i++){
            scanf("%d",&n);
            printf("Fib(%d) = %lld\n", n ,fibonacci(n));
        }
        return 0;
    }