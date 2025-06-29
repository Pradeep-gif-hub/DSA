#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<vector<int>> quad(int n, vector<int>& nums) {
    vector<vector<int>> ans;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                for(int l = k + 1; l < n; l++) {
                    if(nums[i] + nums[j] + nums[k] + nums[l] == 0) { // or any target
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                    }
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
    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> result = quad(n, arr);

    cout << "Quadruplets summing to 0 are:\n";
    for(auto& quad : result) {
        for(int num : quad) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
