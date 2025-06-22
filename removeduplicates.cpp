#include<iostream>
#include<vector>
using namespace std;

int rem(vector<int>& arr, int n) {
    int i = 0;
    for(int j = 1; j < n; j++) {
        if(arr[i] != arr[j]) {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n); // use vector instead of int arr[n]
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int a = rem(arr, n);

    // Optional: Print updated vector
    cout << "After removing duplicates, array size: " << a << "\n";
    cout << "Elements: ";
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
