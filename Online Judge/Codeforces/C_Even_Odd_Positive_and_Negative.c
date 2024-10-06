/*
https://codeforces.com/group/MWSDmqGsZm/contest/219432
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int  evenCount=0, oddCount=0, positiveCount=0, negativeCount=0;

    for(int i=0; i<n; i++){
        int x;
        scanf("%d",&x);

        if(x %2==0){
            // event 
            evenCount++;
            
        }
        else{
            // odd
            oddCount++;
        }

        if(x >0){
            // positive
            positiveCount++;
        }
        else if(x<0){
            // negative
            negativeCount++;
        }

        // printf("Even: %d\n", evenCount);
    }
    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", positiveCount);
    printf("Negative: %d\n", negativeCount);


    return 0;
}