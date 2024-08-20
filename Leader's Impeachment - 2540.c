#include <stdio.h>

int main(){
    int players, sumCons;

    while(scanf("%d", &players) != EOF){

        sumCons = 0;
        int votes[players];

        for(int i = 0; i < players; i++){
            scanf("%d", &votes[i]);
            sumCons += votes[i];
        }

        double param = ((2.0 * players)/3);
        
        if(sumCons >= param){
            printf("impeachment\n");
        }else{
            printf("acusacao arquivada\n");
        }
    }
}