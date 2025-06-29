#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotatema(vector<vector<int>> &mat) {
    int n = mat.size();
    // Transpose
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
    // Reverse each row
    for(int i = 0; i < n; i++){
        reverse(mat[i].begin(), mat[i].end());
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    cout << "Enter the matrix elements:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<< "The original Matrix : "<< mat[i][j] << endl;
        }
    }

    rotatema(mat);

    cout << "Rotated Matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
