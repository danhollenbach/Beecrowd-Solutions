#include <stdio.h>
#include <string.h>

int checkLongest(int n, char names[n][51]) {
    int longest = 0;
        for (int i = 0; i < n; i++) {
            gets(names[i]);
            if ((strlen(names[i])) > longest) {
                longest = strlen(names[i]);
            }
        }
    return longest;
}

void justifier(int n, char names[n][51], int longest) {
    for (int i = 0; i < n; i++) {
        int spaces = longest - strlen(names[i]);
        for(int j = 0; j < spaces; j++) {
            printf(" ");
        }
        printf("%s\n", names[i]);
    }
}

int main() {
    int n, longest = 0;

    scanf("%d", &n);
    getchar();

    while (n != 0) {
        char names[n][51];

        longest = checkLongest(n, names);

        justifier(n, names, longest);

        longest = 0;

        scanf("%d", &n);
        getchar();

        if (n == 0) {
            return 0;
        }

        printf("\n");
        
    }
    
    return 0;
}