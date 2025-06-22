#include<iostream>
#include<vector>
using namespace std;

void printSubsequences(int index, vector<int>& arr, vector<int>& temp) {
    if (index == arr.size()) {
        // Print the current subsequence
        for (int num : temp) cout << num << " ";
        cout << endl;
        return;
    }

    // Include current element
    temp.push_back(arr[index]);
    printSubsequences(index + 1, arr, temp);

    // Exclude current element (backtrack)
    temp.pop_back();
    printSubsequences(index + 1, arr, temp);
}

int main() {
    vector<int> arr = {3, 1, 2};
    vector<int> temp;
    printSubsequences(0, arr, temp);
    return 0;
}
