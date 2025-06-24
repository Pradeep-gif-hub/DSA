#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string finds(int n, vector<int>& arr, int target) {
    int left = 0;
    int right = n - 1;
    sort(arr.begin(), arr.end());

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "Yes";
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return "No";
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    vector<int> arr(n);
    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    string result = finds(n, arr, target);
    cout << result;

    return 0;
}
