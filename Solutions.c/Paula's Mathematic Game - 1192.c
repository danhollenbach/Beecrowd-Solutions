#include <stdio.h>
#include <strings.h>

int main(){

    int n, output;
    char string[4];

    //loop count
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        //input
        scanf("%s", string);

        //if equal
        if(string[0] == string[2]){
            output = (string[0] - 48) * (string[2] - 48);

        //if uppercase
        }else if(string[1] >= 65 && string[1] <= 90){
            output = (string[2] - 48) - (string[0] - 48);

        //if lowercase
        }else{
            output = (string[0] - 48) + (string[2] - 48);
        }
            printf("%d\n", output);
    }
}