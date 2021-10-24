#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number,n;
    cout<<"Enter Number:";
    cin>>number;
    n=number;

    int sum=0;
    while(n!=0)
    {
        int t=n%10;
        n/=10;
        sum+=(t*t*t);

    }
    if(sum==number)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not Armstrong Number"<<endl;
    }
}
