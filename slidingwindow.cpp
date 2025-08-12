#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int pointer(vector<int>& arr, int k) {
    int l = 0, r = 0;
    int sum = 0;
    int mmlength = 0;

    while (r < arr.size()) {
        sum += arr[r]; // Expand window if not mentioned single time
        while (sum > k && l <= r) { // shrink window if sum exceeds k
            sum -= arr[l];
            l++;
        }
        mmlength = max(mmlength, r - l + 1);
        r++;
    }
    return mmlength;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the limit k: ";
    cin >> k;

    cout << "Max length of subarray with sum ≤ " << k << " is: " << pointer(arr, k) << endl;

    return 0;
}
