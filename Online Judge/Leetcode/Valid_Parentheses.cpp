/*
https://leetcode.com/problems/valid-parentheses/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool isValid(string s) {
      stack<char> st;
        for(char c : s)
        {
            if(c == '(' || c == '{' || c == '[')
                st.push(c);
            else
            {
                if(st.empty())
                    return false;
                else
                {
                    if(c == ')' && st.top()=='(')
                        st.pop();
                    else if(c == '}' && st.top()=='{')
                        st.pop();
                    else if(c == ']' && st.top()=='[')
                        st.pop();
                    else
                        return false;
                }
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};

int main() {
    Solution solution;
    string s;
    cin >> s;
    cout << (solution.isValid(s) ? "true" : "false") << endl;
    return 0;
}
