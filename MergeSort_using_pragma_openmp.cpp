
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;                                                                                                                                          
typedef long long int ll;                             //g++ ll.cpp -o ll.exe  
typedef long double ld;  
typedef pair<ll,ll> iii;                              //all elements to 0   .\ll.exe
const ll mod =1e9+7;

void mergeSortRecursive(vector<double>& v, unsigned long left, unsigned long right)
 {
   if (left < right)
    {
      if (right-left >= 8)
       {
         unsigned long mid = (left+right)/2; 
         #pragma omp taskgroup
         {
            #pragma omp task shared(v) untied if(right-left >= (1<<14))
            mergeSortRecursive(v, left, mid);
            #pragma omp task shared(v) untied if(right-left >= (1<<14))
            mergeSortRecursive(v, mid+1, right);
            #pragma omp taskyield
         }
         inplace_merge(v.begin()+left, v.begin()+mid+1, v.begin()+right+1);
        }else
      {
         sort(v.begin()+left, v.begin()+right+1);
       }
    }
  }



void mergeSort(vector<double>& v) { 
     #pragma omp parallel
     #pragma omp single
     mergeSortRecursive(v, 0, v.size()-1); 
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
   vector<double> v(6);
    

    v[0]=0.9;
    v[1]=1457.6;
    v[2]=565.5;
    v[3]=45.5;
    v[4]=0.58;
    v[5]=68.547;
    mergeSort(v);

    for(int i=0;i<6;i++)
      cout<<v[i]<<endl;
 
 
 
 
    
    return 0;
}
