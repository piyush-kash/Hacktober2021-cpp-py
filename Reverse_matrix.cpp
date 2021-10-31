// C++ implementation to print
// reverse wave form of matrix
#include<bits/stdc++.h>
using namespace std;

#define R 4
#define C 4

// function to print reverse wave
// form for a given matrix
void WavePrint(int m, int n, int arr[R][C])
{
	int i, j = n - 1, wave = 1;

	/* m	 - Ending row index
		n	 - Ending column index
		i, j	 - Iterator
		wave	 - for Direction
		wave = 1 - Wave direction down
		wave = 0 - Wave direction up */
	while (j >= 0) {
		
		// Check whether to go in
		// upward or downward
		if (wave == 1) {
			
			// Print the element of the matrix
			// downward since the value of wave = 1
			for (i = 0; i < m; i++)
				cout << arr[i][j] << " ";
		
			wave = 0;
			j--;
		}
		else {
			
			// Print the elements of the
			// matrix upward since the value
			// of wave = 0
			for (i = m - 1; i >= 0; i--)
				cout << arr[i][j] << " ";
			
			wave = 1;
			j--;
		}
	}
}

// driver function
int main()
{
	int arr[R][C] = { { 1, 2, 3, 4 },
					{ 5, 6, 7, 8 },
					{ 9, 10, 11, 12 },
					{ 13, 14, 15, 16 } };				
	WavePrint(R, C, arr);
	
	return 0;
}

// output-
// 4 8 12 16 15 11 7 3 2 6 10 14 13 9 5 1 
