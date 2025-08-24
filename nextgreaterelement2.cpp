#include<iostream> 
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

vector<int> nextgreater2(vector<int>& arr) {
    stack<int> st;  
    int n = arr.size();
    vector<int> ans(n, -1);//aloting all of them intially -1

    // rather we iterate twice over the loop
    for (int i = 0; i < 2 * n; i++) {
        int idx = i % n;  // modluous makes it to return to i=0 and so onnn....
        while (!st.empty() && arr[st.top()] < arr[idx]) {
            ans[st.top()] = arr[idx];
            st.pop();
        }
        if (i < n) st.push(idx);
    }

    return ans;
}

int main() {
    vector<int> arr = {2,4,5,7,3,12,43,6,7,0,8,112,3};
    vector<int> res = nextgreater2(arr);

    cout << "Next Greater Elements in circular array: ";
    for (int x : res) cout << x << " ";
    cout << endl;

    return 0;
}
