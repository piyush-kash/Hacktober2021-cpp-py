#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*top             right
  
  00   01   02   03

  10   11   12   13
  
  20   21   22   23
  
  30   31   32   33
               
left                bottom  




*/
int main()
{
    int n, m;
    cout << "Enter the row size :- \n";
    cin >> n;
    cout << "Enter the coulumn size \n";
    cin >> m;
    int a[n][m];
    cout << "Enter the arrat \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int top = 0, bottom = n - 1, right = m - 1, left = 0;
    while (top <= bottom and left <= right)
    {   //TOP ROW
        for (int i = left; i <= right; i++)
        {
            cout << a[top][i] << " ";
        }
        top++;
        //RIGHT COULUMN
        for (int i = top; i <= bottom; i++)
        {
            cout << a[i][right] << " ";
        }
        right--;
        //BOTTOM ROW(reverse)
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << a[bottom][i] << " ";
            }
            bottom--;
        }
        //LEFT COULUMN(reverse)
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << a[i][left] << " ";
            }
            left++;
            ;
        }
    }
    return 0;
}