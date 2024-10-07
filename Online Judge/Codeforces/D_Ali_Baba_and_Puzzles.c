/*
https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
*/
#include <stdio.h>

int main() {
    long long a, b, c, d;
    
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    
    long long d2 = a + (b * c);
    long long d3 = (a * b) + c;
    long long d4 = a + b - c;
    long long d5 = a - b + c;
    long long d6 = a - (b * c);
    long long d7 = (a * b) - c;

    if ( d2 == d || d3 == d || d4 == d || 
        d5 == d || d6 == d || d7 == d  ) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
