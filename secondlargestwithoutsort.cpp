#include<iostream>
#include<vector>
using namespace std;

int sechigh(int arr[], int n){
    // Step 1: Convert array to vector
    vector<int> v(arr, arr + n);

    // Step 2: Find largest and its index
    int largest = v[0];
    int idx = 0;
    for(int i = 1; i < v.size(); i++) {
        if(v[i] > largest) {
            largest = v[i];
            idx = i;
        }
    }

    // Step 3: "Pop" the largest element (delete using erase)
    v.erase(v.begin() + idx);

    // Step 4: Find second largest
    if(v.empty()) return -1;

    int secondLargest = v[0];
    for(int i = 1; i < v.size(); i++) {
        if(v[i] > secondLargest) {
            secondLargest = v[i];
        }
    }

    return secondLargest;
}

int main(){
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result = sechigh(arr, n);
    if(result == -1)
        cout << "Second largest element doesn't exist." << endl;
    else
        cout << "Second largest element is: " << result << endl;

    return 0;
}
