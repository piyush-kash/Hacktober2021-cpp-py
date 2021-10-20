/*You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.

Return the max sliding window.

 

Example 1:

Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]
Explanation: 
Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7

Example 2:

Input: nums = [1], k = 1
Output: [1]

Example 3:

Input: nums = [1,-1], k = 1
Output: [1,-1]

Example 4:

Input: nums = [9,11], k = 2
Output: [11]

Example 5:

Input: nums = [4,-2], k = 2
Output: [4]

 

Constraints:

    1 <= nums.length <= 105
    -104 <= nums[i] <= 104
    1 <= k <= nums.length

*/

#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // front elem is max of every window
        //time=0(n)
        vector<int> ans;
        deque<int> q;       // deque for window
        q.push_back(0);     // putting index in deque
        for(int i=1;i<k;i++)
        {
            while(!q.empty() && nums[i]>nums[q.back()]) // if elem is greater than prev ones,pop the prev ones out as front should always be greater in window
            {
                q.pop_back();
            }
            q.push_back(i);    // if less directly push or push after popping elem
        }
        for(int i=k;i<nums.size();i++)
        { 
            int val=q.front();         // for first window
            ans.push_back(nums[val]);
            while(!q.empty() &&  q.front() <= (i-k)) /// remove out of window elem
            {
                q.pop_front();
            }
            while(!q.empty()  && nums[i]>nums[q.back()])
            {
                q.pop_back();
            }
            q.push_back(i);
        }
        int val=q.front();      // for last window
        ans.push_back(nums[val]);
        return ans;
        
    }

int main()
{
	int n,k;
	cin>>n;
	
	vector<int> nums;
	
	for(int i=0;i<n;i++)
	{
		int ele;
		cin>>ele;
		nums.push_back(ele);
	}
	cin>>k;
	vector<int>ans;
	ans=maxSlidingWindow(nums,k);
	
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}

    return 0;
}