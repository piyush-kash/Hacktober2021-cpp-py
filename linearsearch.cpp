#include <iostream>
using namespace std;

int search(int arr[], int a, int b)
{
	int i;
	for (i = 0; i < a; i++)
		if (arr[i] == b)
			return i;
	return -1;
}
int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int b = 10;
	int a = sizeof(arr) / sizeof(arr[0]);
	int result = search(arr, a, b);
	(result == -1)? cout << "Element not found": cout << "Element found " << result;
	return 0;
}
