#include<iostream>
#include<vector>
using namespace std;

vector<int> leader(vector<int> arr) {
    int n = arr.size();
    vector<int> ans; // to store leader elements

    for (int i = 0; i < n; i++) {
        bool lead = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                lead = false;
                break;
            }
        }
        if (lead) {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter teh number of ther element: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> res = leader(arr);

    cout << "Leader elements are: ";
    for (int x : res) {
        cout << x << " ";
    }

    return 0;
}
