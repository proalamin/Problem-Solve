
/*
https://codeforces.com/group/MWSDmqGs*zm/contest/219158/problem/K
*/

#include <stdio.h>

int main(){
    int a, b,c;
    scanf("%d %d %d", &a, &b, &c);

    int *x=&a;
    int *y=&b;
    int *z=&c;


    // minimum
    if(*x <=*y && *x<=*z){
        printf("%d ", *x);
    }else if(*y<=*x && *y<=*z){
        printf("%d ", *y);
    }else{
        printf("%d ", *z);
    }

    //ma*ximum
    if(*x >=*y && *x>=*z){
        printf("%d", *x);
    }else if(*y>=*x && *y>=*z){
        printf("%d", *y);
    }else{
        printf("%d", *z);
    }
    


    return 0;
}