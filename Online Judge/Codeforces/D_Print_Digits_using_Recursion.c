/*
https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
*/

#include<stdio.h>

void printDigits(int n){
    if(n==0){
        return;
    }

    int digit= n % 10;
 
    printDigits(n / 10);
    printf("%d ", digit);

}


int main(){
    int input;
    scanf("%d", &input);

    for(int i=0; i<input; i++){

        int n;
        scanf("%d", &n);

        if(n==0){
            printf("0");
        }

        printDigits(n);

        printf("\n");

    }


    return 0;
}