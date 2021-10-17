//to calculate gcd of two given number
#include <iostream>
using namespace std;
int gcd(int x,int y){
	if(x==y)
	   return x;
	if(x==0)
	   return y;
	if(y==0)
	   return x;
	if(x>y)
	   return gcd(x-y,y);
	if(y>x)
	   return gcd(x,y-x);
	
}
int main() {
	int ans,num1,num2;
	cin>>num1>>num2;
	ans=gcd(num1,num2);
    cout<<"the gcd of the given number is: "<<ans<<endl;
	return 0;
}
