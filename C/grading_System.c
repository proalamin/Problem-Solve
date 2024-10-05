/*
Grading System (Simple)-
*/

#include <stdio.h>

int main(){

    int mark;
    scanf("%d", &mark);

    if(mark>100 || mark<0){
        printf("wrong mark input, mark must be 0-100\n");
    }else if(mark>=33){
        printf("you have passed, your grade: ");
        
        if(mark>=90){
            printf("A+\n");
            printf("and you have got scholarship.");
        }else if(mark>=80){
        printf("A+\n");
        }else if(mark>=70){
            printf("A\n");
        }else if(mark>=60){
            printf("A-\n");
        }else if(mark>=50){
            printf("B\n");
        }else if(mark>=40){
            printf("C\n");
        }else{
            printf("D\n");
        }
    }
    else{
        printf("You fail:");
        printf("F\n");
    }

    return 0;
}