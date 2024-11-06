/*
https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A
*/

#include<stdio.h>

int main(){

    int a,b;
    scanf("%d %d", &a, &b);

    int *x=&a;
    int *y=&b;

    int sum=(*x + *y);
    printf("%d\n", sum);

    return 0;
}