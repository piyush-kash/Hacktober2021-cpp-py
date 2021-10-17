#include <iostream.h>
#include<conio.h>
#include<stdlib.h>
 
int max(int a, int b) { return (a > b) ? a: b; }
int knapSack(int W, int wt[], int val[], int n){
    if (n == 0 || W == 0)
	return 0;
    if (wt[n - 1] > W)
	return knapSack(W, wt, val, n - 1);
    else
	return max(val[n - 1]+ knapSack(W - wt[n - 1],wt, val, n - 1),knapSack(W, wt, val, n - 1));
}

int main()
{
    clrscr();
    int val[100];
    int w[100];
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the weights and values"<<endl;
    for(int i=0;i<n;i++){
    cin>>w[i];
    cin>>val[i];
    }
    int W;
    cout<<"Enter the maximum weight"<<endl;
    cin>>W;
    cout << knapSack(W, w, val, n);
    getch();
    return 0;
}
 