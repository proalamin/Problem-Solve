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

 --------------------

Pattern-4
      1
     12
    123
   1234
  12345
 123456
1234567

 --------------------

Pattern-5
      1 
     1 2 
    1 2 3 
   1 2 3 4 
  1 2 3 4 5 
 1 2 3 4 5 6 
1 2 3 4 5 6 7 

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

    /* Pattern-4 */
    printf("Pattern-4\n");
    int n=7;
    for(int i=1; i<=n; i++){

        for(int j=1; j<=n-i; j++){
            printf(" ");
        }

        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n\n");

    /* Pattern-5 */
    printf("Pattern-5\n");
    int x=7;
    for(int i=1; i<=x; i++){

        for(int j=1; j<=x-i; j++){
            printf(" ");
        }

        for(int j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n\n");
    


    return 0;
}