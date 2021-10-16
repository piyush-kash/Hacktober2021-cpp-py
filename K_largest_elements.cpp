// Given an array of N positive integers, print k largest elements from the array.

#include <bits/stdc++.h>
using namespace std;
/*
 * Created by Visual Studio Code
 * Author: Aman Upadhyay
 * Email: aman.upadhyay@s.amity.edu
 * Date: 22/07/2021
*/

// Bubble Sort function
void arraySort(long array[], int size) {
    int i, j, temp;
    for(int i = 0; i < size; i++) {
        for(j = 0; j < size-1; j++) {
            if(array[j] < array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void kLargest(long array[], int k) {
    for(int i = 0; i < k; i++) {
        cout << array[i] << " ";
    }
}

int main() {
    long N, k;
    cin >> N >> k;

    long array[N];
    for(int i = 0; i < N; i++) {
        cin >> array[i];
    }

    arraySort(array, N);
    kLargest(array, k);

    return 0;
}