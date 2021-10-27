#include<bits/stdc++.h>
using namespace std;

//DP
int minCostPath_3(int **input,int m,int n)
{
	int **matrix = new int*[m];
	for(int i=0;i<m;i++)
	{
		matrix[i] = new int[n];
	}
	//Fill the last cell i.e., destination
	matrix[m-1][n-1] = input[m-1][n-1];

	//Fill last row (from right to left)
	for(int j=n-2;j>=0;j--)
	{
		matrix[m-1][j] = matrix[m-1][j+1] + input[m-1][j];
	}

	//fill last column (bottom to top)
	for(int i = m-2;i>=0;i--)
	{
		matrix[i][n-1] = matrix[i+1][n-1] + input[i][n-1];
	}

	//Fill remaining cells
	for(int i=m-2;i>=0;i--)
	{
		for(int j=n-2;j>=0;j--)
		{
			matrix[i][j] = min(matrix[i][j+1],min(matrix[i+1][j+1],matrix[i+1][j])) + input[i][j];
		}
	}

	return matrix[0][0];
	
}

//Memoisation
int helper(int **input,int m,int n,int i,int j,int **matrix)
{
	if(i==m-1 && j==n-1)
	{
		return input[i][j];
	}
	if(i>=m || j>=n) return INT_MAX;
	if(matrix[i][j]!=-1) return matrix[i][j];

	int x = helper(input,m,n,i+1,j,matrix);
    int y = helper(input,m,n,i+1,j+1,matrix);
    int z = helper(input,m,n,i,j+1,matrix);

	matrix[i][j] = min(x,min(y,z))+input[i][j];
	return matrix[i][j];
}

int minCostPath_2(int **input,int m,int n)
{
    int **matrix = new int*[m];
	for(int i=0;i<m;i++)
	{
		matrix[i] = new int[n];
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			matrix[i][j] = -1;
		}
	}
	helper(input,m,n,0,0,matrix);
	int ans = matrix[0][0];
	for(int i=0;i<m;i++)
	{
		delete [] matrix[i];
	}
	delete []matrix;
	return ans;

}
//Brute Force
int helper(int **input,int m,int n,int i,int j)
{
    if(i==m-1 && j==n-1)
    {
        return input[i][j];
    }
    if(i>=m || j>=n)
    {
        return INT_MAX;
    }

    int x = helper(input,m,n,i+1,j);
    int y = helper(input,m,n,i+1,j+1);
    int z = helper(input,m,n,i,j+1);

    return min(x,min(y,z))+input[i][j];
}
int minCostPath(int **input, int m, int n)
{
    return helper(input,m,n,0,0);
}

int main()
{
	int **arr, n, m;
	cin >> n >> m;
	arr = new int *[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << minCostPath(arr, n, m) << endl;
	cout << minCostPath_2(arr, n, m) << endl;
	cout << minCostPath_3(arr, n, m) << endl;
}
