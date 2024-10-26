// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C

#include<stdio.h>
#include<string.h>

int main(){
    char first[50];
    char second[50];

    fgets(first, sizeof(first), stdin);
    fgets(second, sizeof(second), stdin);

    int camp=strcmp(first, second);
    int camp2=strcmp(second, first);

    if(camp<=0){
        fputs(first, stdout);
    }else if(camp2<=0){
        fputs(second, stdout);
    }

    // printf("%d\n", camp);
    // printf("%d\n", camp2);

   


    return 0;
}