#include<iostream>
#include<vector>
using namespace std;

// function to return spiral order traversal 
    vector<int> spiral(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int left = 0, right = m - 1;
        int top = 0, bottom = n - 1;
        vector<int> ans;

        while (left <= right && top <= bottom) {
            // traverse top row from left to right
            for (int i = left; i <= right; i++) {
                ans.push_back(mat[top][i]);
            }
            top++;

            // traverse right column from top to bottom
            for (int i = top; i <= bottom; i++) {
                ans.push_back(mat[i][right]);
            }
            right--;

            // traverse bottom row from right to left
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(mat[bottom][i]);
                }
                bottom--;
            }

            // traverse left column from bottom to top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
        }
        return ans;
    }

int main() {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    vector<int> ans = spiral(mat);

    cout << "\nSpiral Order Traversal:\n";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
