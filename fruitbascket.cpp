#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int fruit(vector<int>& arr, int k) {
    int l = 0, r = 0, maxi = 0;
    unordered_map<int, int> mp;
    while (r < arr.size()) {
        mp[arr[r]]++;
        while (mp.size() > k) {
            mp[arr[l]]--;
            if (mp[arr[l]] == 0) {
                mp.erase(arr[l]);
            }
            l++;
        }
        maxi = max(maxi, r - l + 1);
        r++;
    }
    return maxi;
}

int main() {
    vector<int> arr = {3,3,3,1,2,2,2,1,3,2,4,3,2,2,3,4};
    int k;
    cout << "Enter the number of total baskets: ";
    cin >> k;
    cout << fruit(arr, k);
    return 0;
}
