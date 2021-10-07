#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   bool swapp; 
   for (i = 0; i < n-1; i++) 
   { 
     swapp = false; 
     for (j = 0; j < n-i-1; j++) 
     { 
        if (arr[j] > arr[j+1]) 
        { 
           swap(arr[j], arr[j+1]); 
           swapp = true; 
        } 
     }  
     if (swapp == false) 
        break; 
   } 
} 
  void printArray(int arr[], int n) 
{ 
    int i; 
    for (i=0; i < n; i++) 
        cout<<arr[i]<<" "; 
}  
int main() 
{ int n;
cin>>n;
    int arr[1000000];
    for(int i=0;i<n;i++)
    {cin>>arr[i];
	}
	bubbleSort(arr, n); 
    printArray(arr, n); 
    return 0; 
} 
© 2020 GitHub, Inc.
