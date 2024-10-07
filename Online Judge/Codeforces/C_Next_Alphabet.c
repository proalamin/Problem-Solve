/*
https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
*/

#include <stdio.h>

int main(){
    char C;
    scanf("%c", &C);

    if(C>=97 && C<=121){
        printf("%c\n", C+1);
    }else if(C==122){
        printf("a");
    }

    return 0;
}