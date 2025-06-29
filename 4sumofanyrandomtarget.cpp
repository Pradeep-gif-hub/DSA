#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<vector<int>> foursum(vector<int> &nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>> ans;
    for(int i = 0; i < n; i++) {
        if(i > 0 && nums[i] == nums[i - 1]) continue;
        for(int j = i + 1; j < n; j++) {
            if(j > i + 1 && nums[j] == nums[j - 1]) continue; // fixed duplicate skip
            int k = j + 1;
            int l = n - 1;
            while(k < l) {
                long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                if(sum == target) {
                    ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;
                    while(k < l && nums[k] == nums[k - 1]) k++;
                    while(k < l && nums[l] == nums[l + 1]) l--;
                } else if(sum < target) {
                    k++;
                } else {
                    l--;
                }
            }
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int target;
    cout << "Enter the target value: ";
    cin >> target;

    vector<int> nums(n);
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> result = foursum(nums, target);

    cout << "Quadruplets with the given target are:\n";
    for(auto &quad : result) {
        for(int num : quad) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
