#include <iostream>
#include <vector>
using namespace std;

void sub(vector<int>& arr, int n) {
    // Loop for all subarrays
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            vector<int> subarr;
            int sum = 0;
            for (int k = i; k <= j; k++) {
                subarr.push_back(arr[k]);
                sum += arr[k];
            }

            // Check if sum is 3
            if (sum == 3) {
                for (int num : subarr) {
                    cout << num << " ";
                }
                cout << "(sum = 3)";
                cout << endl;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Subarrays with sum = 3:\n";
    sub(arr, n);

    return 0;
}
