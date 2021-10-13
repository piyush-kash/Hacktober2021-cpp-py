#include <iostream>
using namespace std;
#define M 1000000007

// Normal Method Complexity - O(n)
// Complexity - O(logn)
// Modular Exponention
long long int calculatepower(long long int A, long long int B)
{
    if (B == 0)
        return 1;

    else if (B % 2 == 0)
        return calculatepower((A * A) % M, B >> 1) % M;
    else
        return (A * calculatepower((A * A) % M, B >> 1) % M );
}

int main()
{
    cout << calculatepower(2, 10);
    return 0;
