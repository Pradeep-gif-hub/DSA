#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string longeststring(string s) {
    vector<char> arr;
    string longest;

    for (char c : s) {
        auto it = find(arr.begin(), arr.end(), c);
        if (it != arr.end()) {
            arr.erase(arr.begin(), it + 1); // remove up to duplicate
        }
        arr.push_back(c);
        if (arr.size() > longest.size()) {
            longest = string(arr.begin(), arr.end());
        }
    }
    return longest;
}

int main() {
    string s = "abcabcbb";
    cout << "Longest substring: " << longeststring(s) << endl;
}
