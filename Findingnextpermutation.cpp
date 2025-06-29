#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void findp(vector<int>& arr) { // Changed return type to void
    int ind = -1;
    int n = arr.size();

    // find break point
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            ind = i;
            break;
        }
    }

    // if no break point, reverse and return
    if (ind == -1) {
        reverse(arr.begin(), arr.end());
        return;
    }

    // find just greater element from right side
    for (int i = n - 1; i > ind; i--) {
        if (arr[i] > arr[ind]) {
            swap(arr[i], arr[ind]); // Corrected swap syntax
            break;
        }
    }

    // reverse the right half
    reverse(arr.begin() + ind + 1, arr.end());
}

int main() {
    vector<int> arr = {1, 2, 3};
    findp(arr);
    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
