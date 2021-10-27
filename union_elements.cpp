// union elements to print between 2 arrays

#include<bits/stdc++.h>
using namespace std;

void uni(int a[],int b[],int m,int n)                   // int uni(int a[],int b[],int m,int n) --to return size
{
    unordered_set<int> s;
    for(int i=0;i<m;i++)
    {
        s.insert(a[i]); // s.add(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        s.insert(b[i]); // s.add(b[i]);
    }
    for(auto it=s.begin();it!=s.end();it++)             // return s.size();
    {
        cout<<*it<<" ";
    }
}

int main()
{
    int m;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    uni(a,b,m,n);
    return 0;
    
}