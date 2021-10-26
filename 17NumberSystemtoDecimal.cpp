#include <bits/stdc++.h>
using namespace std;
int main(){
    char hex[17];
    long long ans=0,tp1;
    int len,val;
    
    cin>>hex;
    
    len=strlen(hex);
    
    for(int i=0;len>0;i++){
        if(hex[i]>='0' && hex[i]<='9'){
            val = (hex[i] - '0');
        }
        else if(hex[i]>='a' && hex[i]<='g'){
            val = (hex[i] - 'a')+10;
        }
        else if(hex[i]>='A' && hex[i]<='G'){
            val = (hex[i] - 'A')+10;
        }
        else{
            cout<<"error";
        }
        cout<<val<< " "<<len<<" "<<ans<<endl;
        ans+=val*pow(17,len-1);
        len--;
    }
    cout<<ans;
    return 0;
}
