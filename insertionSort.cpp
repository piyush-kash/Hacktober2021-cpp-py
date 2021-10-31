#include <iostream>
using namespace std;
void display(int array[], int size) {
for(int i = 0; i<size; i++)
cout << array[i] << " ";
cout << endl;
}
void insertionSort(int array[], int size) {
int key, j;
for(int i = 1; i<size; i++) {
key = array[i]; //take value
j = i;
while(j > 0 && array[j-1]>key) {

array[j] = array[j-1];
j--;
}
array[j] = key; //insert in right place
}
}


int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		insertionSort(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}

	return 0;
}
