/*
https://docs.google.com/document/d/1KOilh4Vb-PN21_kD7ejLA6qx6AhVbHlq/edit

Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL to solve this problem.

Test case-1
Sample Input
5
10 20 30 40 50
5
10 20 30 40 50

Sample Output
YES

Test case-2
Sample Input
5
10 20 30 40 50
4
10 20 30 40

Sample Output
NO

Test case-3
Sample Input
5
10 20 30 40 50
5
50 40 30 20 10

Sample Output
NO

*/

#include<bits/stdc++.h>
using namespace std;

class myStack{
    public:
        vector<int> v;

        void push(int val){
            v.push_back(val);
        }

        void pop(){
            v.pop_back();
        }

        int top(){
            return v.back();
        }

        int size(){
            return v.size();
        }

        bool empty(){
            return v.empty();
        }
};

int main(){

    myStack st;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    myStack st2;
    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        st2.push(x);
    }

    bool flag=true;
    if(n==m){
        while(!st.empty()){
            int val1= st.top();
            int val2= st2.top();
            if(val1!=val2){
                flag=false;
                break;
            }
            st.pop();
            st2.pop();
        }
        if(flag==true){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }else{
        cout << "NO";
    }



    return 0;
}