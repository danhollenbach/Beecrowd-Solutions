#include <stdio.h>

void readInputs(int coins, int *arr){
        for(int i = 0; i < coins; i++){
            scanf("%d", &arr[i]);
        }
}

int jumps(int coins, int *arr, int jump){
    int result = 0;

    while(coins > 0){
        result += arr[coins - 1];
        coins -= jump;
    }

    return result;

}

int checkPrime(int result){
    int notPrime = 0;
    if(result == 1) return 1;
        for(int i = 2; i <= result/2; i++){
            if(result % i == 0){
                notPrime = 1;
                break;
            }
        }
        return notPrime;
}

int main(){
    
    int coins, jump, result, winner;

    while(scanf("%d", &coins) != EOF){

        int arr[coins];

        readInputs(coins, arr);        

        scanf("%d", &jump);

        result = jumps(coins, arr, jump);

        winner = checkPrime(result);
    
        if(winner == 0){
            //if prime
                printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        }
        else{
            //if not prime
                printf("Bad boy! I’ll hit you.\n");
            }
    }
}