#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> threeSum(vector<int>& nums,int n) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
       
        for(int i=0;i<n-2;i++)
        {
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            {
                int low=i+1,high=n-1;
                int sum=0-nums[i];
                while(low<high)
                {
                    if(nums[low]+nums[high]==sum)
                    {
                        vector<int>ans;
                        ans.push_back(nums[i]);
                        ans.push_back(nums[low]);
                        ans.push_back(nums[high]);
                        v.push_back(ans);
                        while(low<high && nums[low]==nums[low+1])low++;
                        while(low<high && nums[high]==nums[high-1])high--;
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high]<sum)low++;
                    else high--;
                }
            }
        }
        return v;
    }

    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            vector<int>a(n);
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            vector<vector<int>>final_ans=threeSum(a,n);
            int sz=final_ans.size();
            int m=final_ans[0].size();
            for(int i=0;i<sz;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<final_ans[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
        }
        return 0;
    }