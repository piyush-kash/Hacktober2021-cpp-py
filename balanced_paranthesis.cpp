// Check For Balanced Paranthesis in a string

#include<bits/stdc++.h>
#include<stack>
using namespace std;

bool matching(char a, char b)
{
    return((a=='(' && b==')')) || ((a=='{') && b=='}') || ((a=='[' && b==']'));
}
bool isBalanced(string str)
{
    stack<int>s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
            s.push(str[i]);
        }
        else
        {
            if(s.empty()==true)
                return false;
            else if(matching(s.top(),str[i]==false))
                return false;
            else
                s.pop();
        }
    }
    return(s.empty()==true); // to handle extra opening brackets
}

int main()
{
    string str;
    cin>>str;
    isBalanced(str);
    return 0; 
}