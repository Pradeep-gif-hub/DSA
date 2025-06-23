#include <iostream>
#include <vector>
using namespace std;

void leftRotate(vector<int>& arr) {
    if (arr.empty()) return;

    int first = arr[0]; //first one is assigend 

    for (int i = 0; i < arr.size() - 1; i++) {
        arr[i] = arr[i + 1];  // Shift each element left
    }

    arr[arr.size() - 1] = first;  // Put first element at the end
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    leftRotate(arr);

    cout << "Array after left rotation by 1: ";
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
