// WAP To Find The Length Of The Longest Arithmetic Array In Given Array.
     
//      An arithmetic array is an array that contains at least two integers and 
// the differences between consecutive integers are equal.
// pd ->  Common Past Difference
// curr -> Current Length of Array 
// max ->  length Of The Arithmetic Array. 
// Example:- 2 3 4 5 3 1 -1 -3 -5 -7
// For Above Example {2,3,4,5} & {5,3,1,-1,-3,-5,-7} Are in Arithmetic Sequence. 
// Length Of Longest Arithmetic Array is:- 7

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Length Of The Array:-";
    cin>> n;
    int A[n];
    cout<< "Enter The Elements Of The Array."<<endl;
    for(int i=0; i<n; i++)
    {
        cin>> A[i];
    }
    int pd;
    int curr=1;  // First Element Always Count In Arithmetic Array.
    int ans=0;
    pd= A[1]-A[0];
    for(int i=0;i<n-1;i++)
    {
       if(pd==(A[i+1]-A[i]))
       {
         curr++;
       }
       else
       {
         pd= (A[i+1]-A[i]);
         curr=2;             //Every Starting Two Elements are in Arithmetic progession.
       }
       ans= max(ans,curr);
    }
    cout<<endl<<ans;
    return 0;
}
