/*
find a number is odd or even and this number is Positive or Negative
*/

#include <stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    if(num %2==0){
        printf("Even\n");

        if(num>0){
            printf("Positive");
        }else if(num <0){
            printf("Negative");
        }

    }else{
        printf("Odd\n");
        
        if(num>0){
            printf("Positive");
        }else if(num <0){
            printf("Negative");
        }
    }

    return 0;
}