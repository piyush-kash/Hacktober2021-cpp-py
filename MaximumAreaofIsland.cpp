/*Given a non-empty 2D array grid of 0's and 1's, an island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.

Find the maximum area of an island in the given 2D array. (If there is no island, the maximum area is 0.)

Example 1:

[[0,0,1,0,0,0,0,1,0,0,0,0,0],
 [0,0,0,0,0,0,0,1,1,1,0,0,0],
 [0,1,1,0,1,0,0,0,0,0,0,0,0],
 [0,1,0,0,1,1,0,0,1,0,1,0,0],
 [0,1,0,0,1,1,0,0,1,1,1,0,0],
 [0,0,0,0,0,0,0,0,0,0,1,0,0],
 [0,0,0,0,0,0,0,1,1,1,0,0,0],
 [0,0,0,0,0,0,0,1,1,0,0,0,0]]

Given the above grid, return 6. Note the answer is not 11, because the island must be connected 4-directionally.

Example 2:

[[0,0,0,0,0,0,0,0]]

Given the above grid, return 0.

Note: The length of each dimension in the given grid does not exceed 50.*/


    // mark as 2 for visited
    // time=0(nm)
    // space=0(1)
    
#include<iostream>
#include<vector>
using namespace std;

void dfs(vector<vector<int>>& grid,int row,int col,int n,int m,int &temp)
    {
        if (row<0 || row>=n || col<0 || col>=m || grid[row][col]==2 || grid[row][col]==0)
        {
            return;
        }
            grid[row][col]=2;  // if not 2 nor 0 it will be 1,so make it visited by marking 2
            temp+=1;           // increase area by 1  
        dfs(grid,row+1,col,n,m,temp);//traversing all the four directions of each cell
        dfs(grid,row-1,col,n,m,temp);
        dfs(grid,row,col+1,n,m,temp);
        dfs(grid,row,col-1,n,m,temp);
    }
    
int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)  // if island
                {
                    int temp=0;
                    dfs(grid,i,j,n,m,temp);
                    ans=max(ans,temp);
                }
            }
        }
        return ans;
    }


int main()
{
	
   int row,col;
   cin>>row>>col;
   
   vector<vector<int>> grid(row , vector<int> (col));
   
   for(int i=0;i<row;i++)
   {
   	 for(int j=0;j<col;j++)
   	 {
   	   cin>>grid[i][j];	
	 }
  }	
	
	cout<<"Maximum area of Island : "<<maxAreaOfIsland(grid)<<endl;
	
	return 0;
}