#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll q,t,k;
  string w,s="";
  vector<string> v;
  cin>>q;
  while(q--)
  {
    cin>>t;
    
      if(t==1)
      {
          cin>>w;
          s=s+w;
          v.push_back(s);
      }
      else if(t==2)
      {
         cin>>k;
         s=s.substr(0,s.length()-k);
        v.push_back(s);
      }
      else if(t==3)
      {
        cin>>k;
        cout<<s[k-1]<<endl;
      }
      else if(t==4)
      {
        if(v.size()==0)
          s="";
        else
        {
        v.pop_back();
        if(v.size()!=0)
        s=v[v.size()-1];
      else
        s="";
        }
      }
    }
  return 0;
}
7
