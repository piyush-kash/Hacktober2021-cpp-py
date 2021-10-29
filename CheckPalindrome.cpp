#include <iostream>
#include <cstring>
using namespace std;

#include <cstring>

bool helper(char input[], int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (input[start] != input[end])
    {
        return false;
    }
    bool smallcheck = helper(input, start + 1, end - 1);
    return smallcheck;
}

bool checkPalindrome(char input[])
{
    int len = strlen(input);
    int start = 0, end = len - 1;
    return helper(input, start + 1, end - 1);
}

int main()
{
    char input[50];
    cin >> input;

    if (checkPalindrome(input))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}