#include <stdio.h>
int starTrek( int n, int stolen[], long long int *nonstolen){
        int i, max = -1, raid = 0;
        for(i = 0; (i >= 0) && (i < n); i++){
            if( i > max){
                raid++;
                max = i;
            }
            if((stolen[i] % 2) != 0){
                stolen[i]--;
                continue;
            }
            else{
                if(stolen[i] > 0){
                    stolen[i]--;
                }
                i-=2;
            }
        }
        for(i = 0; i < n; i++){
            *nonstolen += stolen[i];
        }
        return raid;
    }
    
    int main(){
    int n, raids; 
    long long nonstolen = 0;

    scanf("%d", &n);

    int stolen[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &stolen[i]);
    }

    raids = starTrek(n, stolen, &nonstolen);
    printf("%d %lld\n", raids, nonstolen);

    return 0;
}