#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size()) return "";

        // Store t's characters and required counts
        unordered_map<char, int> need;
        for (char c : t) need[c]++;

        vector<char> arr;
        for (char c : s) arr.push_back(c);
        
        unordered_map<char, int> window;
        int have = 0, needCount = need.size();
        int left = 0, minLen = INT_MAX, startIdx = 0;
        for (int right = 0; right < arr.size(); right++) {
            char c = arr[right];
            window[c]++;

            if (need.count(c) && window[c] == need[c]) {
                have++;
            }
                while (have == needCount) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    startIdx = left;
                }
                char leftChar = arr[left];
                window[leftChar]--;
                if (need.count(leftChar) && window[leftChar] < need[leftChar]) {
                    have--;
                }
                left++;
            }
        }
        if (minLen == INT_MAX) return "";
        return string(arr.begin() + startIdx, arr.begin() + startIdx + minLen);
    }
};