#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int jump(vector<int>& arr) {
    int n = arr.size();
    int jumps = 0;
    int l = 0, r = 0;

    while (r < n - 1) {
        int farthest = 0;
        for (int i = l; i <= r; i++) {
            farthest = max(farthest, i + arr[i]);
        }
        l = r + 1;
        r = farthest;
        jumps++;
    }
    return jumps;
}

int main() {
    vector<int> arr = {3, 5, 2, 6, 7, 8, 9};
    cout << jump(arr);
    return 0;
}
