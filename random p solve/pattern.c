/*
Pattern-1
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5


*/

#include <stdio.h>

int main(){

    // int n;
    // scanf("%d", &n);

    for(int i=1; i<=5; i++){
        // printf("%d ", i);

        for(int j=1; j<=i; j++){
            printf("%2d", j);
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}