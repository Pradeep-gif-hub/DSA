#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> nextSmaller(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n, -1); 
    stack<int> st; // store indices
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[i] < arr[st.top()]) {
            ans[st.top()] = arr[i]; // updating the indes
            st.pop();
        }
        st.push(i); // push index
    }
    return ans;
}
int main() {
    vector<int> arr = {4, 5, 2, 25};
    vector<int> res = nextSmaller(arr);

    cout << "Next Smaller Elements: ";
    for (int x : res) cout << x << " ";
    cout << endl;

    return 0;
}
