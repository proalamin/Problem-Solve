/*
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[100000], str2[100000];
    scanf("%s", str);
    scanf("%s", str2);

    int length1=strlen(str);
    int length2=strlen(str2);
    printf("%d %d\n", length1, length2);
    printf("%s%s\n", str, str2);

    char temp=str[0];
    str[0]=str2[0];
    str2[0]=temp;

    printf("%s %s\n", str, str2);


    return 0;
}