#include<bits/stdc++.h>
using namespace std;
int countDistinct(int a[],int n)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    int ans=s.size();
    return ans;
}

// one more way without taking for loops

// int countDistinct(int a[],int n)
// {
//     unordered_set<int> s(a,n);
//     return s.size();   
// }

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<countDistinct(a,n);
    return 0;
    
}