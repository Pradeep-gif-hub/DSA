#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int assignCookies(vector<int>& child, vector<int>& cookies) {
    sort(child.begin(), child.end());
    sort(cookies.begin(), cookies.end());

    int i = 0; // child index
    int j = 0; // cookie index
    int cnt = 0;

    while (i < child.size() && j < cookies.size()) {
        if (cookies[j] >= child[i]) { 
            cnt++;
            i++; // move to next child
        }
        j++; // move to next cookie
    }

    return cnt;
}

int main() {
    vector<int> child = {2, 3, 4, 5, 1, 6};
    vector<int> cookies = {4, 3, 6, 4, 8, 6};
    cout << assignCookies(child, cookies);
    return 0;
}
