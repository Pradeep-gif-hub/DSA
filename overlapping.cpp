#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int meeting(vector<int>& start, vector<int>& end) {
    vector<pair<int,int>> ans;
    int n = start.size();
    
    // pair start and end times
    for (int i = 0; i < n; i++) {
        ans.push_back({end[i], start[i]}); // store as {end, start} for sorting
    }
    sort(ans.begin(), ans.end()); // sort by end time
    
    int count = 1; // pick first meeting
    int lastEnd = ans[0].first;
    
    for (int i = 1; i < n; i++) {
        if (ans[i].second >= lastEnd) { // if start >= last end
            count++;
            lastEnd = ans[i].first;
        }
    }
    return start.size()-count;
}

int main() {
    vector<int> start = {0, 3, 1, 5, 5, 8};
    vector<int> end   = {5, 4, 2, 9, 7, 9};
    cout << meeting(start, end);
    return 0;
}
