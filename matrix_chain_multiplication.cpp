// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int matrixMultiplication(int n, int arr[])
    {
        int dp[n][n];
        for(int i=0; i<n; i++){
            dp[i][i] = 0;
        }
        for(int len = 2; len < n; len++){
            for(int i=1; i <= n-len; i++){
                int j = i + len - 1;
                dp[i][j] = INT_MAX;
                
                for(int k = i; k<j; k++){
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + arr[i-1]*arr[j]*arr[k]);;
                }
            }
        }
        return dp[1][n-1];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends
