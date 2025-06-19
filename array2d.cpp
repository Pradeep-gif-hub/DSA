#include<iostream>
using namespace std;

int main() {
    char arr[2][2];

    arr[0][0] = 'a';
    arr[0][1] = 'b';
    arr[1][0] = 'c';
    arr[1][1] = 'd';

    cout << "The 2D array is:\n";
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
