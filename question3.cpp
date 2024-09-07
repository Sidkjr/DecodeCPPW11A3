#include <iostream>
using namespace std;
int findIndex(int arr[], int n, int x) {
    if (n == 0) return -1; 
    if (arr[n-1] == x) return n-1; 
    return findIndex(arr, n-1, x); 
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int index = findIndex(arr, n, x);
    cout << "Element " << x << " is at index " << index << endl;
}