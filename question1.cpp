#include <iostream>
using namespace std;

int findMin(int arr[], int n) {
    if (n == 1) return arr[0];
    return min(arr[n-1], findMin(arr, n-1)); 
}
int main() {
    int arr[] = {3, 5, 1, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum element is " << findMin(arr, n) << endl;
}