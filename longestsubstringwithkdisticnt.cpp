#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int longsub(string s, int k) {
    int l = 0, r = 0, n = s.size(), maxi = 0;
    unordered_map<char, int> mp;

    while (r < n) {
        mp[s[r]]++;

        // Shrink the window if we have more than k distinct chars
        while (mp.size() > k) {
            mp[s[l]]--;
            if (mp[s[l]] == 0) {
                mp.erase(s[l]);
            }
            l++;
        }

        // Update maximum if exactly k distinct characters
        if (mp.size() == k) {
            maxi = max(maxi, r - l + 1);
        }

        r++;
    }
    return maxi;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    int k;
    cout << "Enter k (number of distinct chars): ";
    cin >> k;

    cout << "Longest substring length with exactly " << k << " distinct characters: "
         << longsub(s, k) << endl;
}
