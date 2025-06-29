#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

vector<vector<int>> quad(int n, vector<int> &nums, int target = 0) {
    set<vector<int>> unique_quads; // to store unique quadruplets
    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            set<int> hashset;
            for(int k = j + 1; k < n; k++) {
                int fourth = target - (nums[i] + nums[j] + nums[k]);
                if(hashset.find(fourth) != hashset.end()) {
                    vector<int> temp = {nums[i], nums[j], nums[k], fourth};
                    sort(temp.begin(), temp.end());
                    unique_quads.insert(temp);
                }
                hashset.insert(nums[k]);
            }
        }
    }

    vector<vector<int>> ans(unique_quads.begin(), unique_quads.end());
    return ans;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> result = quad(n, nums, 0);
    cout << "Quadruplets summing to 0:\n";
    for(auto v : result) {
        for(auto num : v) cout << num << " ";
        cout << endl;
    }
    return 0;
}
