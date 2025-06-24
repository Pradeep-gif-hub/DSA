#include <iostream>
#include <vector>
using namespace std;
//timne complexity is O(n) and space compelcity is O(1) as nonr space is kept

int majr(vector<int>& s) {
    int ele = 0, cnt = 0;

    // Finding  candidate using Moore's Voting Algorithm
    for (int i = 0; i < s.size(); i++) {
        if (cnt == 0) {
            ele = s[i];
            cnt = 1;
        } else if (s[i] == ele) {
            cnt++;
        } else {
            cnt--;
        }
    }
    cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ele) {
            cnt++;
        }
    }

    if (cnt > s.size() / 2) {
        return ele;
    } else {
        return -1;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> s(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int a = majr(s);
    if (a != -1)
        cout << "Majority element is: " << a << endl;
    else
        cout << "No majority element exists." << endl;

    return 0;
}
