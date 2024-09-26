#include <stdio.h>
#include <string.h>

void gibberish2normal(int count, char str[100]){
    int half;
    
    // fix even inputs
    half = (count - 1)/ 2;

    for(int i = half; i >= 0; i--){
            printf("%c", str[i]);
    }

    // end to middle
    for(int j = count - 1; j > half; j--){
        printf("%c", str[j]);
    }

    printf("\n");


    return;
}

int main(){
    int n, count;
    char str[105];

    scanf("%d", &n);
    getchar(); // fix scanf bug

    for(int i = 0; i < n; i++){
        gets(str);
        
        count = strlen(str);
        
        gibberish2normal(count, str);
        
    }
}