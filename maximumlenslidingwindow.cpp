#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxlen(vector<int>& arr, int k) {
    int l = 0, r = 0;
    int n = arr.size();
    int sum = 0;
    int maxi = 0;

    while (r < n) {
        sum += arr[r]; // Fixed 
        while (sum > k && l <= r) {
            sum -= arr[l];
            l++;
        }
        maxi = max(maxi, r - l + 1);
        r++;
    }
    return maxi;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the max allowed sum (k): ";
    cin >> k;

    cout << "Max length: " << maxlen(arr, k) << endl;
    return 0;
}
