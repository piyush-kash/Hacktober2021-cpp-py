#include <iostream>
using namespace std;

int main() {
	cout<<"Find the Mystery Number!"<<endl;
	cout<<"First Clue"<<endl<<"the number between 1 to 10"<<endl<<"Enter your number : ";
	int first_number;
	cin>>first_number;
	if (first_number == 5) {
	    cout<<"Congratulations you find the mistery number!";
	    return 0;
	}
	else (first_number != 5);
	    cout<<"The number is not Mystery Number, please try again"<<endl;
	    cout<<"Second Clue"<<endl<<"The number is odd number"<<endl<<"enter your second number : ";
	
	int second_number;
	cin>>second_number;
	if (second_number == 5) {
	    cout<<"Congratulations you find the mistery number!";
	    return 0;
	}
	else (second_number != 5) ;
		 cout<<"The number is not Mystery Number, please try again"<<endl;
		  cout<<"Second Clue"<<endl<<"The number < 6" <<endl<<"enter your second number : ";
	
	int third_number;
	cin>>third_number;
	if (third_number == 5) {
	    cout<<"Congratulations you find the mistery number!";
	    return 0;
	}
	else (second_number != 5) ;
		 cout<<"The number is not Mystery Number, your chance has run out, the answer is 5"<<endl;
	return 0;
}
