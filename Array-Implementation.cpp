#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

void insert(int a[], int n, int ele, int pos)
{
    for (int i = n; i >= pos; i--)
    {
        a[i+1] = a[i];
    }
    a[pos] = ele;
}
void del(int a[], int n, int pos)
{
    for (int i = pos; i <=n; i++)
        a[i] = a[i+1];
}

int search(int a[], int n, int key)
{
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
            cout << key << " Is At Index : " << i << endl;
            return 0;
    }
    cout << "Not Found In Array ";
    return 0;
}
void PRINT(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i]<< " ";
    }
}

int main()
{
    int i, n, pos, ele, key;
    int A[100];
    int c;
    int size;
    cout << "Enter Size:";
    cin >> n;
    cout << "Enter The Elements:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int iteration = 0;
    while (iteration >= 0)
    {
        cout << "Enter Your Choice"<<endl;
        cout<<" 1-Search"<<endl<<" 2-Insert"<<endl<<" 3-Delete"<<endl;
        cout<<" 0-Exit"<<endl;
        cin >> c;
        if (c == 1)
        {
            cout<<"Search Element In Array"<<endl;
            cout << "Enter Element: ";
            cin >> key;
            search(A, n, key);
        }
        if (c == 2)
        {
            cout<<"Insert Element In Array"<<endl;
            cout << "Enter Element & Index Respectively: " << endl;
            cin >> ele >> pos;
            insert(A, n, ele, pos);
            n++;
            PRINT(A, n);
            iteration++;
            cout << endl;
        }
        if (c == 3)
        {
            cout<<"Delete  Element From Array"<<endl;
            cout << "Enter Index: " << endl;
            cin >> pos;
            del(A, n, pos);
            n--;
            PRINT(A, n);
            iteration++;
            cout << endl;
        }
        if (c == 0)
        {
            return 0;
        }
    }
    return 0;
}
