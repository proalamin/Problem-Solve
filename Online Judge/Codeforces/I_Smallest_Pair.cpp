/*
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int t, n;
    cin>> t; 
    for(int i=1; i<=t; i++){
        cin >> n;
        int arr[n+1];

        for(int i=1; i<=n; i++){
            cin>> arr[i];
        }
        
        int minValue=INT_MAX;

        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                minValue=min(minValue, arr[i]+arr[j]+j-i);
            }
        }
        cout << minValue<<endl;
    }
    


    return 0;
}