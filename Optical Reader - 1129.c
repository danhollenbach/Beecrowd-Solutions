#include <stdio.h>

int main(){
    
    int n;
    int greyLevel[5];

    do{
        scanf("%d", &n);
            if(n == 0) break;
            for(int i = 0; i < n; i++){

                scanf("%d %d %d %d %d", &greyLevel[0], &greyLevel[1], &greyLevel[2], &greyLevel[3], &greyLevel[4]);

                int a, b, c, d, e;
                a = greyLevel[0] <= 127 ? 1 : 0;
                b = greyLevel[1] <= 127 ? 1 : 0;
                c = greyLevel[2] <= 127 ? 1 : 0;
                d = greyLevel[3] <= 127 ? 1 : 0;
                e = greyLevel[4] <= 127 ? 1 : 0;

                if( a + b + c + d + e != 1) printf("*\n");
                else if( e == 1) printf("E\n");
                else if( d == 1 ) printf("D\n");
                else if( c == 1 ) printf("C\n");
                else if( b == 1 ) printf("B\n");
                else printf("A\n");
                
            }

    }while( n!= 0);
    
    
}