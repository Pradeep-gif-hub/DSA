#include<iostream>
using namespace std;

void selection(int arr[], int n) {
    for(int i = 0; i <= n - 2; i++) {
        int mini = i;
        for(int j = i; j <= n - 1; j++) {
            if(arr[j] < arr[mini]) {
                mini = j;
            }
        }
        // Swap
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Input
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort
    selection(arr, n);

    // Output
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
