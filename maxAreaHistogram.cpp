#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {6, 2, 5, 4, 5, 1, 6};
    int n = sizeof(a) / sizeof(a[0]);

    //we have to find max area of rectangle in hiostogram (pepcoding vid)

    //for solving we will have to find the nearest shorter element to the curr element on both side
    //as if side elements are greater than curr, then they would contribute in rectangle but the width will stop as soon as
    // we encounter shorter height on both sides

    stack<int> s;

    s.push(n - 1);

    int rb[n]; // next shorter element on right
    rb[n - 1] = n - 1;

    for (int i = n - 2; i >= 0; i--)
    {

        while (s.size() > 0 && a[i] < a[s.top()])
            s.pop();

        if (s.size() == 0)
            rb[i] = n;
        else
            rb[i] = s.top();

        s.push(i);
    }

    int lb[n]; //next shorter element on left
    lb[0] = -1;

    for (int i = 1; i < n; i++)
    {
        while (s.size() > 0 && a[i] < a[s.top()])
            s.pop();

        if (s.size() == 0)
            lb[i] = -1;
        else
            lb[i] = s.top();

        s.push(i);
    }

    int maxArea = 0;
    for (int i = 0; i < n; i++)
    {
        int width = rb[i] - lb[i] - 1;
        int h = a[i];
        int currArea = h * width;

        if (currArea > maxArea)
            maxArea = currArea;
    }
    cout << maxArea;
}