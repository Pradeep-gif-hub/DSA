#include <iostream>
#include <stack>
#include <string>
using namespace std;

string postfixtoinfix(string s) {
    stack<string> st;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];

        // if operand checking in the given domain
        if ((c >= 'A' && c <= 'Z') || 
            (c >= 'a' && c <= 'z') || 
            (c >= '0' && c <= '9')) {
            st.push(string(1, c));
        }
        // if operator checking whether in the doamin with the size basis 
        else {
            if (st.size() < 2) return "Invalid Postfix";
            string op2 = st.top(); st.pop();
            string op1 = st.top(); st.pop();
            string exp = "(" + op1 + c + op2 + ")";
            st.push(exp);
        }
    }
    return (st.size() == 1) ? st.top() : "Invalid Postfix";
}

int main() {
    string s;
    cout << "Enter postfix expression: ";
    cin >> s;
    cout << "Infix expression: " << postfixtoinfix(s) << endl;
    return 0;
}
