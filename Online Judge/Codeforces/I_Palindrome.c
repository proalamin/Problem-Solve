/*
https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
*/

#include<stdio.h>
#include<string.h>

int main(){ 
    char str[100000], str2[100000];

    scanf("%s", str);
    strcpy(str2, str);

    int length=strlen(str);

    for(int i=0, j=length-1; i<length; i++, j--){
        str2[j]=str[i];
    }
    
    int palindrome=1;
    for(int i=0; i<length; i++){
       if(str[i] != str2[i]){
        palindrome=0;
        break;
       }

    }

    if(palindrome){
        printf("YES");
    }else{
        printf("NO"); 
    }

    return 0;
}