#include <bits/stdc++.h>
#include <iostream>
using namespace std;

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
    int x;
    cout << "Enter the element you want to search in array\n";
    cin >> x;
    int right = m - 1, top = 0, bottom = n - 1, left = 0;
    bool f = 0;
    int i = 0, j = m - 1;
    for (int i = right; i >= 0; i--)
    {
        if (x < a[top][right])
        {
            right--;
        }
        if (x == a[top][right])
        {
            f = 1;
            cout << "Found at "
                 << "(" << top << "," << right << ")";
            break;
        }
        if (x > a[top][right])
        {
            top++;
        }
    }

    if (f == 0)
        cout << "The element not found";

    return 0;
}