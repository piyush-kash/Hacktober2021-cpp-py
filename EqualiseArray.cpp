#include <bits/stdc++.h>
using namespace std;
int equalizeArray(vector<int> arr)
{
    vector<int>x(101,0);
    int ctr{};
    for (int i = 0; i < arr.size(); i++)
    {
        x[arr[i]]++;
    }
    for (int i = 0; i < 101; i++)
    {
        if (x[i] > ctr)
        {
            ctr = x[i];
        }
    }
    return arr.size()-ctr;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << equalizeArray(arr);

    return 0;
}