#include <stdio.h>
#include <string.h>

int main() {
    int tests;

    scanf("%d", &tests);
    for(int idx = 0; idx < tests; idx++){
        char name[42];
        int count = 0, lenght;
        fflush(stdin)  ;
        scanf("%s", name);  
        fflush(stdin);
        lenght = strlen(name);

        for(int i = 0; i <= lenght; i++){
            if(i == lenght){
                    printf("%s eh facil\n", name);
                    break;
            }else if((name[i] != 'a') && (name[i] != 'e') && (name[i] != 'i') && (name[i] != 'o') && (name[i] != 'u') && (name[i] != 'A') && (name[i] != 'E') && (name[i] != 'I') && (name[i] != 'O') && (name[i] != 'U')){
                        count++;
                        if(count == 3){
                        printf("%s nao eh facil\n", name);
                        break;
            }
                    }else{
                    count = 0;    
                    }
                }
            } 
 
    return 0;
}
