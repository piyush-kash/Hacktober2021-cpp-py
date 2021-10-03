/* This is a cpp program to sort an array 
using Bubble sort in ascending order ,
you can enter the number of elements in the array of your choice
and also the elements of your choice*/

#include<iostream>
using namespace std;
void Bubble(int arr[], int n){
   if (n == 1)
      return;
   for (int i=0; i<n-1; i++) 
      if (arr[i] > arr[i+1]) 
   swap(arr[i], arr[i+1]); //swap elements
   Bubble(arr, n-1);
}
main() {
    int n;
    cout<<"Enter the number of elements:\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cout<<"Enter element "<<i+1<<" in the array:\n";
	  cin>>arr[i];	
	}
   int no = sizeof(arr)/sizeof(arr[0]);
   cout << "Sorted Sequence ";
   Bubble(arr, no);
   for(int i = 0; i <no;i++){
      cout << arr[i] << " ";
   }
}
