#include <iostream>
using namespace std;

int divisible(int num,int a,int b)
{
    int c1=num/a;
    int c2=num/b;
    int c3=num/(a*b);

    return c1+c2-c3;
}

int main()
{
    int num;
    int d1,d2;
    cout<<"Enter number"<<endl;
    cin>>num;
    cout<<"Enter d1 and d2"<<endl;
    cin>>d1>>d2;

    int res=divisible(num,d1,d2);
    cout<<"Number of factor==>"<<res;
    return 0;
}