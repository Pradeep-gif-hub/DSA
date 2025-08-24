#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int prec(char c) {
    if(c == '^') return 3;
    if(c == '*' || c == '/') return 2;
    if(c == '+' || c == '-') return 1;
    return -1;
}

string infixToPostfix(string s) {
    stack<char> st;
    string result;
    for(int i=0;i<s.length();i++) {
        char c = s[i];
        // operand
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;
            // opening bracket
        else if(c == '(')
            st.push(c);
            // closing bracket
        else if(c == ')') {
            while(!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            if(!st.empty()) st.pop();
        }
        // operator
        else {
            while(!st.empty() && prec(st.top()) >= prec(c)) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()) {
        result += st.top();
        st.pop();
    }
    return result;
}

string infixToPrefix(string s) {
    // reversing infix
    reverse(s.begin(), s.end());

    //swaping the brackest ( and )
    for(int i=0;i<s.length();i++) {
        if(s[i] == '(') s[i] = ')';
        else if(s[i] == ')') s[i] = '(';
    }

    // get postfix
    string postfix = infixToPostfix(s);

    // reverse postfix to prefix
    reverse(postfix.begin(), postfix.end());
    return postfix;
}

int main() {
    string exp = "(A-B/C)*(A/K-L)";
    cout << "Prefix: " << infixToPrefix(exp) << endl;
    return 0;
}
