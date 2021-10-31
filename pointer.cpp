#include<iostream>

using namespace std;

int main(){
	long long a = 50;
	long long *ptr = &a;
	cout << "&a  " << &a << "\n";
	cout << "a  " << a << "\n";
	cout << "*ptr  "<<*ptr<<"\n";
	cout << "ptr  " << ptr << "\n";
	ptr = &a;
	cout << "*ptr  " << *ptr << "\n";
	cout << "ptr  " << ptr << "\n";
	*ptr = a;
	cout << "*ptr  " << *ptr << "\n";
	cout << "ptr  " << ptr << "\n";

	cout << "&ptr  " << &ptr << "\n";
	cout << "sizeof(ptr)  " << sizeof(ptr) << "\n";
	cout << "sizeof(*ptr)  " << sizeof(*ptr) << "\n";
	cout << "sizeof(&ptr)  " << sizeof(&ptr) << "\n";
	cout << "sizeof(a)  " << sizeof(a) << "\n";
	//cout << "sizeof(a)  " << sizeof(*a) << "\n";
	cout << "sizeof(&a)  " << sizeof(&a) << "\n";

}