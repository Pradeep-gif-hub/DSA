#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int pointer(vector<int>& arr, int k) {
    int maxi = 0;
    for(int i = 0; i < k; i++) {
        int sum = 0; // reset for each i
        for(int j = i; j <= k; j++) {
            sum += arr[i];
            sum += arr[j];
        }
        maxi = max(maxi, sum);
    }
    return maxi;
}

int main() {
    int s;
    cout << "Enter number of elements: ";
    cin >> s;
    vector<int> arr(s);
    cout << "Enter the numbers: ";
    for(int i = 0; i < s; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the number of iterations to be summed as: ";
    cin >> k;

    cout << "Max sum: " << pointer(arr, k) << endl;
    return 0;
}
