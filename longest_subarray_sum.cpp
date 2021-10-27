// Longest Subarray with given Sum
#include<bits/stdc++.h>
using namespace std;

int longestSum(int a[],int n,int sum)
{
    unordered_map<int,int> m;
    int pre_sum=0, res=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=a[i];
        if(pre_sum==sum)
        {
            res=i+1;
        }
        if(m.find(pre_sum)==m.end()) // if (m.contain(pre_sum))
        {
            m.insert({pre_sum,i});
        }
        if(m.find(pre_sum-sum)!=m.end()) // if (m.contains(presum-sum))
        {
            res=max(res,i-m[pre_sum-sum]);
        }
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    cout<<longestSum(a,n,sum);
    
}
