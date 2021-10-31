#include <iostream>
using namespace std;



int Partition(int arr[],int lb,int ub)
{
    int pivot=arr[lb];
    int start=lb;
    int end=ub;
    int temp=0;

    while (start<end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        while (arr[end]>pivot)
        {
            end--;
        }

        if(end>start)
        {
            temp=0;
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }

        
    }

    temp=0;
    temp=arr[lb];
    arr[lb]=arr[end];
    arr[end]=temp;

    return end;
    
} 


void Quicksort(int arr[],int lb,int ub)
{
    int loc=0;
    if (lb<ub)
    {
        loc=Partition(arr,lb,ub);
        Quicksort(arr,lb,loc-1);
        Quicksort(arr,loc+1,ub);
    }
}

int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[100];

    cout<<"Enter array elements\n";
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    Quicksort(arr,0,n-1);

    cout<<"Sorted array"<<endl;
    int j=0;

    for(j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }


    return 0;
}