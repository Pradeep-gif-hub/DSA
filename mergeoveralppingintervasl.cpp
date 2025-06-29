#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<vector<int>> mergeover(vector<vector<int>> arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end(), [](vector<int> &a, vector<int> &b) {
        return a[0] < b[0];
    });
    vector<vector<int>> ans;
    for(int i = 0; i < n; i++) {
        if(ans.empty() || arr[i][0] > ans.back()[1]) {
            ans.push_back(arr[i]);
        } else {
            ans.back()[1] = max(ans.back()[1], arr[i][1]); // ✅ Corrected
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;
    vector<vector<int>> arr(n);
    cout << "Enter intervals as pairs (start end):\n";
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arr[i] = {x, y};
    }
    vector<vector<int>> result = mergeover(arr);
    cout << "Merged Intervals:\n";
    for(auto &interval : result) {
        cout << interval[0] << " " << interval[1] << endl;
    }
    return 0;
}
