/*
Program to Generate Multiplication Table and N table 
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int j=1; j<=n; j++){
        printf("multi table of %d :-\n",j);
        for(int i=1; i<=10; i++){
            
            printf("%d * %2d = %3d\n", j, i, j*i);
        }
        printf("\n");
    }
    

    return 0;
}