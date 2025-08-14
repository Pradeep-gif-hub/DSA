#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int numberOfSubstrings(string s) {
    int n = s.size();
    int l = 0;
    unordered_map<char, int> mp;
    int ans = 0;

    for (int r = 0; r < n; r++) {
        mp[s[r]]++;

        // Shrink until we have less than 3 distinct chars
        while (mp.size() == 3) {
            ans += n - r; // all substrings from current r to end are valid
            mp[s[l]]--;
            if (mp[s[l]] == 0) {
                mp.erase(s[l]);
            }
            l++;
        }
    }
    return ans;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << "Number of substrings containing all three chars: "
         << numberOfSubstrings(s) << endl;
}
