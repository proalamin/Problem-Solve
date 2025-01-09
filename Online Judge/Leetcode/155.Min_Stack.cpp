/*
https://leetcode.com/problems/min-stack/description/
*/

#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int>st, min_st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(min_st.empty())
            min_st.push(val);
        else if(min_st.top() >= val)
            min_st.push(val);
    }
    
    void pop() {
        if(st.top() == min_st.top())
            min_st.pop();
        st.pop();

    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();

    }
};

int main(){

    // for run visit problem link
    // https://leetcode.com/problems/min-stack/description/


    return 0;
}