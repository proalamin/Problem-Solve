/*
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[10000000]; // in vs code can't run but codeforces accepted
    scanf("%s", str);

    int f[26]={0};

    int len =strlen(str);

    for(int i=0; i<len; i++){
        char ch=str[i];
        int index=ch-'a';
        f[index]++;
    }

    for(int i=0; i<26; i++){
        if(f[i]>0){
            printf("%c : %d\n", i+'a', f[i]);
        }
    }

    return 0;
}