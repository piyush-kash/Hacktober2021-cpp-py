#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> v,string res,string m[],int i)
{
    if(i== v.size()-1)
    {
      int j=0;
       while(m[v[i]][j]!='\0')
       {
          cout<<res<<m[v[i]][j]<<" ";
          j++;
       }
       return ;
    }
    else
    {
       int j=0;
       while(m[v[i]][j]!='\0')
       {
           solve(v,res+m[v[i]][j],m,i+1);
           j++;
       }
       return ;
    }
}
void generatestrings(vector<int>& v)
{
   string m[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   solve(v,"",m,0);
}
int main()
{
   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++)
   cin>>v[i];
   generatestrings(v);
   return 0;
}
