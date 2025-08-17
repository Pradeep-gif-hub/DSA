#include<iostream>
#include<vector>
using namespace std;
class Stack {
    vector<int> st;
    int topIndex;
public:
    Stack() { topIndex = -1; }
    void push(int x) {
        st.push_back(x);
        topIndex++;
    }
    int pop() {
        if (topIndex == -1) {
            cout << "Stack Underflow\n";
            return -1;
        }
        int val = st[topIndex];
        st.pop_back();
        topIndex--;
        return val;
    }

    int top() {
        if (topIndex == -1) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return st[topIndex];
    }

    int size() {
        return topIndex + 1;
    }

    bool empty() {
        return topIndex == -1;
    }
};
