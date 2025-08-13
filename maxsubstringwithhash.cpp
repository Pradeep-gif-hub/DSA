#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int hashsubstring(string s) {
    int n = s.size();
    int l = 0, r = 0;
    int maxi = 0;

    // Hash type syncronisation adn the previsob values are stored herew wit -1 
    vector<int> lastIndex(256, -1);

    while (r < n) {
        if (lastIndex[s[r]] != -1 && lastIndex[s[r]] >= l) {
            l = lastIndex[s[r]] + 1; // move left pointer
        }
        int len = r - l + 1;
        maxi = max(maxi, len);
        lastIndex[s[r]] = r; // store latest index
        r++;
    }
    return maxi;
}

int main() {
    string s;
    cout << "Enter the string for which we have to find out the Substring: ";
    cin >> s;
    cout << "Length of longest substring without repeating characters: "
         << hashsubstring(s) << endl;
}
