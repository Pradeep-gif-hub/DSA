#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<unordered_set>
using namespace std;

void markrow(vector<vector<int>>& arr, int i, int m) {
    for(int j = 0; j < m; j++) {
        if(arr[i][j] != 0) {
            arr[i][j] = -1;
        }
    }
}

void markcoloumn(vector<vector<int>>& arr, int j, int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i][j] != 0) {
            arr[i][j] = -1;
        }
    }
}

int setmatrix(vector<vector<int>>& arr, int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == 0) {
                markrow(arr, i, m);
                markcoloumn(arr, j, n);
            }
        }
    }
    return 1;
}

int main() {
    int n;
    cout << "Enter the number of row: ";
    cin >> n;
    int m;
    cout << "Enter the number of coloumn: ";
    cin >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int a = setmatrix(arr, n, m);
    cout << a;
    return 0;
}
