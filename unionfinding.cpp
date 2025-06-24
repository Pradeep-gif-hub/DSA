#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int removedu(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int i = 0;
    for (int j = 1; j < arr.size(); j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    // Resize to remove extra duplicates
    arr.resize(i + 1);
    return arr.size(); // return new length
}

vector<int> club(vector<int>& arr1, vector<int>& arr2) {
    removedu(arr1);
    removedu(arr2);

    vector<int> result = arr1;
    result.insert(result.end(), arr2.begin(), arr2.end()); // merge
    sort(result.begin(), result.end()); // sort before removing duplicates again
    removedu(result);

    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements in your first array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int n2;
    cout << "Enter the number of elements in your second array: ";
    cin >> n2;

    vector<int> arr2(n2);
    cout << "Enter elements: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    vector<int> d = club(arr, arr2);

    cout << "The union of the two arrays without duplicates is: ";
    for (int i = 0; i < d.size(); i++) {
        cout << d[i] << " ";
    }

    return 0;
}
