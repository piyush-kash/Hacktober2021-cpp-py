/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,i;
    int arr[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    
    int f,l,diff=0;
    f=arr[0];
    diff=f-0;
    for(i=0;i<n;i++)
    {
        if(arr[i]-i!=diff)
        {
            cout<<endl<<"Missing element is="<<(diff+i);
            break;
        }
    }

    return 0;
}
