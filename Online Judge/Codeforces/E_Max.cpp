/*
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>> a[i];
    }

    // 1st way
    // int maxValue= *max_element(a, a+n);
    // cout << maxValue <<endl;

    // second way
    int maxValue=a[0];
    for(int i=0; i<n; i++){
        maxValue=max(maxValue, a[i]);
    }
    cout << maxValue <<endl;

    return 0;
}