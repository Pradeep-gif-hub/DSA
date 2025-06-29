#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> triplet(int n, vector<int>& arr) {
    vector<vector<int>> ans;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == 0) {
                    ans.push_back({arr[i], arr[j], arr[k]});
                }
            }
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "The number of elements in the array: ";
    cin >> n;
    vector<int> num(n);
    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }

    vector<vector<int>> result = triplet(n, num);
    cout << "Triplets with sum zero are:\n";
    for(auto trip : result) {
        for(auto val : trip) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}

