// this paticular questions corresponds to the folloing question on leetcode
// try this out first for yourself
//leetcode-1732 https://leetcode.com/problems/find-the-highest-altitude/
//TC: O(n), SC: O(1)
//Runtime: 0 ms
//Memory Usage: 8 MB

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_alt=0;
        int curr_alt=0;
        for(int i=0;i<gain.size();i++){
            curr_alt+=gain[i]; 
            max_alt=max(curr_alt, max_alt);
        }
        return max_alt;
    }
};

