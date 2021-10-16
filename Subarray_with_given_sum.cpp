// Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.

#include <iostream>
using namespace std;
/*
 * Created by Visual Studio Code
 * Author: Aman Upadhyay
 * Email: aman.upadhyay@s.amity.edu
 * Date: 23/07/2021
*/

int subarraySum(long array[], int n, int s) {
    long sum;
    for(int i = 0; i < n; i++) {
        sum = array[i];
        for(int j = i+1; j <= n; j++) {
            if(sum == s) {
                cout << i+1 << " " << j << endl;
                return 1;
            }
            if(sum > s || j == n) break;
            sum = sum + array[j];
        }
    } cout << "Not Found" << endl;
    return 0;
}

int main() {
    long N, S;
    cin >> N >> S;

    long Arr[N];
    for(int i = 0; i < N; i++) {
        cin >> Arr[i];
    }

    subarraySum(Arr, N, S);

    return 0;
}