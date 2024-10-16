/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
*/

#include <stdio.h>

int main(){
    char X;
    scanf("%c", &X);

    if(X>=65 && X<=90){
        int small=X+32;
        printf("%c", small);
    }else if(X>=97 && X<=122){
        int capital=X-32;
        printf("%c", capital);
    }


    return 0;
}