/*
Question: At first in the main function take an integer N as input. Then make a function named get_array() which will receive that N as a parameter. Then inside the get_array() function create an integer array of size N. Then the values of that array will be taken as input. After that return that array from that function and receive it in the main function and print the values of the array there.

Sample Input
5
1 2 3 4 5

Sample Output
1 2 3 4 5
*/

#include<bits/stdc++.h>
using namespace std;


int* get_array(int n){
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    return arr;
}

int main(){

    int n;
    cin>>n;
    
    int *getArr= get_array(n);
    for(int i=0; i<n; i++){
        cout << getArr[i] << " ";
    }

    return 0;
}