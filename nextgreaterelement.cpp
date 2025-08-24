#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextgreater(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n, -1); // given -1 for all
    stack<int> st; // store indexes of it

    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[i] > st.top()) {
            st.top() = arr[i];
            st.pop();
        }
        st.push(arr[i]);
    }
    return ans;
}

int main() {
    vector<int> arr = {4, 5, 2, 25};
    vector<int> res = nextgreater(arr);

    cout << "Next Greater Elements: ";
    for (int x : res) cout << x << " ";
    cout << endl;

    return 0;
}
