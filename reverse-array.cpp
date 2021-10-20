/*Q6.Write a C program to find 
reverse of an array.*/
#include<iostream>
using namespace std;
int main(){
    int n,a[n],b[n];
    cout<<"Enter the size of an array\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[n-1-i]=a[i];
    }
    cout<<"Reverse elements are : ";
    for(int j=0;j<n;j++){
        cout<<b[j]<<" ";
    }

    return 0;
}