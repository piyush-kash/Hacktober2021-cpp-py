
/*Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]*/

#include<iostream>
#include<vector>
using namespace std;

 vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;
        int n = nums.size();
        
        for(int i=0;i<(1<<n);i++) //loop will run 2^n
        {
            vector<int>v;
            for(int j=0;j<n;j++) //checking for each element 
            {
                if(i & (1<<j)) //checking set bit
                {
                    v.push_back(nums[j]);
                }
            }
            
            ans.push_back(v);
        }
        
        return ans;
    }

int main()
{
   int n;
   cin>>n;

   vector<int>input;

   for(int i=0;i<n;i++)
   {
   	   int ele;
       cin>>ele;
       input.push_back(ele);
   }
   
   vector<vector <int>> ans = subsets(input);
   
   for(int i=0;i<ans.size();i++)
   {
   	  for(int j=0;j<ans[i].size();j++)
   	  {
   	        cout<<ans[i][j]<<" "; 	
	  }
	  cout<<endl;
   }
   

    return 0;
}

 /*
        [1,2,3]
        000 till 111
        2^3=8
        //1<<j=1*2^j
        000  - []
        001  -[1]
        010  -[2]
        011  -[1,2]
        100  -[3]
        101  -[3,1]
        110  -[2,3]
        111  -[1,2,3]
        
        
        */