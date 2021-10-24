/*
Let us consider a set of numbers p1,p2,…..,pn such that they are co-prime. Our objective is to find an unknown,x, given the following data:

x= a1 mod p1      meaning that x gives remainder a1 when divided by p1

x=a2 mod p2      x gives remainder a2 when divided by p2

……

x= an mod pn

with this information, we are supposed to determine x. We will see shortly, however, that multiple values of x are possible which satisfy the given constraints. Note that the solution does not always exist as the constraints may be contradicting.

EFFICIENT METHOD

Let us take an example to understand the problem more deeply.

Say,

1.x= 3 mod 4

2.x= 5 mod 6

3.x= 2 mod 5

We will start the manual calculation with the first statement.

1.x= 3 mod 4. Now when we take natural numbers, we can see that 3, 7, 11,15,… and so on can satisfy this. Or, in other words, all numbers from 3 as we add 4 will satisfy this condition. Let us call this a 3(+4 ) set.

Now let us take the second statement and filter out the possible numbers from the existing set of 3(+4) numbers.

2.x= 5 mod 6. The first number from the 3 (+4) set to satisfy this is 11, then we have 23, and so on.  We can see that the common difference has become 12 which is the LCM of 6 and 4. Also notice that we haven’t checked all the natural numbers that satisfy this condition this time, only the ones in the previous set. This will reduce the number of checkings we have to do.

So now the set becomes 11 (+12) set.

To this let us add the final condition.

3.x= 2 mod 5. If we do this similarly we can check that 47 is the first number in the 11(+12 ) set that satisfies this condition. Now we can calculate the common difference as LCM of 5,12 which is 60. So the final set is 47 (+60 ).

The solution is 47, 107,167, etc. as all these numbers will satisfy the conditions. As we have discussed there are multiple solutions possible in this scenario. But generally we take the least number as the solution as we have done in the brute force method.

Let us now see the c++ code for this.
*/
#include <iostream>
#include <vector>
using namespace std;
int gcd(int n1, int n2) // calculating gcd using eucledian's formula
{
    if (n2 == 0)
        return n1;
    return gcd(n2, n1 % n2);
}
int lcm(int n1, int n2)
{ //caculating lcm using the formula: lcm x gcd = n1 x n2
    int gc, lc;
    gc = gcd(n1, n2);
    lc = n1 * n2 / gc;
    return lc;
}
int main()
{
    int x, cd, i, p, r, n;
    int cnt, flag; // we use this to count the max checks, we can keep it as much as we want
    vector<int> pr, rem;
    cin >> n; // number of inputs
    for (i = 0; i < n; i++)
    {
        cin >> p >> r;
        pr.push_back(p);
        rem.push_back(r);
    }
    x = rem[0]; // let us say the first number will be the starting and
    cd = pr[0]; // the first remainder will be the common difference like we saw in the example
    for (i = 1; i < n; i++)
    {
        cnt = 0;
        flag = 0;
        while (cnt < 100000) // Here we have taken a max value for 10^5 because we are dealing with large numbers
        {
            if (x % pr[i] == rem[i]) // condition for finding the next start value
            {
                flag = 1;
                break;
            }
            x = x + cd;
        }
        if (flag == 0) // This means that no number until cnt range has matched the condition.
        {
            cout << "No solution."; // Hence no solution is possible
            return 0;
        }
        cd = lcm(pr[i], cd); // updating the cd
    }
    cout << x << " " << cd;
    return 0;
}