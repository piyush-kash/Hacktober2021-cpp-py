#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    
    
    cout<<"Enter array elements"<<endl;
    int i;
    int arr[50];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int max=0;
    
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    
    int hash[max];
    for(i=0;i<max;i++)
    {
        hash[i]=0;
    }
    int k=0,j=0;
    for(j=0;j<n;j++)
    {
        k=arr[j];
        hash[k]=1;
    }

    
    for(i=1;i<max;i++)
    {
        if(hash[i]==0)
        {
            cout<<endl<<"Missing element is "<<i;
        }
    }

    return 0;
}