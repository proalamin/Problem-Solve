/*
https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E
*/

#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    int *x=&a;
    int *y=&b;

    int *temp=x;
    x=y;
    y=temp;

    printf("%d %d\n", *x, *y);




    return 0;
}