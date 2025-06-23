#include <iostream>
#include <vector>
#include <algorithm>  // for sort
using namespace std;

bool isSortedArray(vector<int> arr) {
    vector<int> temp = arr;         // Make a copy
    sort(temp.begin(), temp.end()); // Sort the copy
    return temp == arr;             // Compare vectors directly (C++11+)
}

int main() {
    vector<int> arr = {1, 2, 3, 4};  // Try changing this to {3, 2, 1}
    
    if (isSortedArray(arr)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}
