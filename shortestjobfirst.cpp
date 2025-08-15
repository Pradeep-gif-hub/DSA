#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double shortestJobFirst(vector<int>& arr) {
    sort(arr.begin(), arr.end()); // shortest job first

    vector<int> waiting(arr.size(), 0);
    int totalWaiting = 0;

    for (int i = 1; i < arr.size(); i++) {
        waiting[i] = waiting[i - 1] + arr[i - 1];
        totalWaiting += waiting[i];
    }

    return (double)totalWaiting / arr.size(); // average waiting time
}

int main() {
    vector<int> arr = {4, 3, 7, 1, 2};
    cout << shortestJobFirst(arr);
    return 0;
}
