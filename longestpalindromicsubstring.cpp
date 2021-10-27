#Problem Description Link:- https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
public:
    string longestPalindrome(string s) {
        string ss = "#"; 
        for (auto& ch : s) {
            ss.push_back(ch); 
            ss.push_back('#'); 
        }
        
        int n = ss.size(), center = 0, right = 0; 
        vector<int> hlen(n); 
        for (int i = 0; i < n; ++i) {
            if (i < right) hlen[i] = min(right-i, hlen[2*center-i]); 
            while (0 <= i-1-hlen[i] && i+1+hlen[i] < n && ss[i-1-hlen[i]] == ss[i+1+hlen[i]]) ++hlen[i]; 
            if (right < i+hlen[i]) center = i, right = i+hlen[i]; 
        }
        
        int ii = 0, xx = 0; 
        for (int i = 0; i < n; ++i) 
            if (xx < hlen[i]) ii = i, xx = hlen[i]; 
        return s.substr((ii-xx)/2, xx); 
    }
};
