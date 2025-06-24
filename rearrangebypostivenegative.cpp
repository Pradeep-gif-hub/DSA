#include<iostream>
#include<vector>
using namespace std;

void rearrange(vector<int>& arr) {
    int n = arr.size();
    vector<int> arrneg;  
    vector<int> arrpos;
    //iterating with iterzateror c and storing if num is neg or postive inn twor diff vectors ar arrpos, arrneg

    for (int c : arr) {
        if (c < 0) {
            arrneg.push_back(c);
        } else {
            arrpos.push_back(c);
        }
    }

    //  returning in loop, now building the output in the vector as res;
    vector<int> res;
    int i = 0, j = 0;

    while (i < arrpos.size() && j < arrneg.size()) {
        res.push_back(arrpos[i++]);
        res.push_back(arrneg[j++]);
    }

    //if anyleft outs in betweenn the ciode
    while (i < arrpos.size()) res.push_back(arrpos[i++]);
    while (j < arrneg.size()) res.push_back(arrneg[j++]);

    //copy to the original array
    arr = res;
}

int main() {
    int n;
    cout << "Enter the number of the elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rearrange(arr);

    cout << "Rearranged array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
