//CHEQUE on Balanced Brackets

#include<iostream>
#include<stack>
using namespace std;

bool isbalance(string s){
    stack<char> st;
    for (int it = 0;it<s.size();it++)
    {
        if(s[it] == '(' || s[it] == '{' || s[it] == '[')
            st.push(s[it]);
        else
            if(st.empty())return false;
            char x = st.top();
            st.pop();
            if (x == '(' && s[it] == ')' || x == '[' && s[it] == ']' || x == '{' && s[it] == '}')continue;
            else
                return false;
    }
    return st.empty();
}
