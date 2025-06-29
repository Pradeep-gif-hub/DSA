#include<iostream>
#include<vector>
using namespace std;

vector<int> maxim(vector<int> &arr) {
    int el1 = 0, el2 = 0, c1 = 0, c2 = 0;
    int n = arr.size();

    // First pass: find candidates
    for (int i = 0; i < n; i++) {
        if (arr[i] == el1) c1++;
        else if (arr[i] == el2) c2++;
        else if (c1 == 0) {
            el1 = arr[i];
            c1 = 1;
        }
        else if (c2 == 0) {
            el2 = arr[i];
            c2 = 1;
        }
        else {
            c1--;
            c2--;
        }
    }

    // Second pass: check if candidates occur > n/3
    c1 = 0; c2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == el1) c1++;
        else if (arr[i] == el2) c2++;
    }

    vector<int> ls;
    if (c1 > n / 3) ls.push_back(el1);
    if (c2 > n / 3) ls.push_back(el2);

    return ls;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = maxim(arr);

    cout << "Elements occurring more than n/3 times:\n";
    if (result.empty()) {
        cout << "No such element exists.\n";
    } else {
        for (int x : result) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
    