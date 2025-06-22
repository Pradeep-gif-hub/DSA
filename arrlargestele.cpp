#include<iostream>
using namespace std;

// Pass both array and its size to the function
int findlargest(int arr[], int n) {
    int largest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int n;
    cout << "Enter the number of elements of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Now call function once
    int a = findlargest(arr, n);
    cout << "The largest element is: " << a << endl;

    return 0;
}
