/*
Pattern-1
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
 
 --------------------

Pattern-2
 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  *
 
 --------------------

Pattern-3
 1
 2 1
 3 2 1
 4 3 2 1
 5 4 3 2 1

*/

#include <stdio.h>

int main(){


    /* Pattern-1 */
    printf("Pattern-1\n");
    for(int i=1; i<=5; i++){
        // printf("%d ", i);

        for(int j=1; j<=i; j++){
            printf("%2d", j);
        }
        printf("\n");
    }

    printf("\n\n");

    /* Pattern-2 */
    printf("Pattern-2\n");
    for(int i=1; i<=5; i++){
        // printf("%d ", i);

        for(int j=1; j<=i; j++){
            printf(" * ");
        }
        printf("\n");
    }

    printf("\n\n");

    /* Pattern-3 */
    printf("Pattern-3\n");
    for(int i=1; i<=5; i++){

        for(int j=i; j>=1; j--){
            printf("%2d", j);
        }
        printf("\n");
    }

    printf("\n\n");


    return 0;
}