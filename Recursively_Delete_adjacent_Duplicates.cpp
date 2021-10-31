#include <bits/stdc++.h>
using namespace std;
string temp = "";
bool check(string s)
{
    if (s.length() == 1 || s.length()==0)
    {
        return true;
    }
    int i = 0;
    while (s[i] != s[i + 1])
    {
        if (i == s.length() - 2)
            return true;
        i++;
    }
    return false;
}

string remove(string s, int i = 0)
{
     static int count;
    if (s == "")
        return "";
    if (i == s.length())
    {
        if (count == i - 1)
            temp.pop_back();

        string final = "";
        final = temp;

        temp.clear();
        if (check(final))
        {
            return final;
        }
        else
        {
            return remove(final);
        }
    }
    if (i == 0)
    {    count =-1;
        temp.push_back(s[i]);
    }

    else if (s[i] == s[i - 1])
    {
        count = i;
    }
    else
    {
        if (count == i - 1)
            temp.pop_back();
        temp.push_back(s[i]);
    }
    return remove(s, i + 1);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string f1 = remove(s);
        cout<<f1<<endl;
    }
}