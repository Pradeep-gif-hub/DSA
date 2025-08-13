#include <iostream>
#include <vector>
using namespace std;

int maxones(vector<int>& arr) {
    int maxCount = 0, count = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
    }
    return maxCount;
}

int main() {
    vector<int> arr = {1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 3, 4};
    cout << "Maximum consecutive 1s: " << maxones(arr) << endl;
    return 0;
}
