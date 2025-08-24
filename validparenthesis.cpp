#include<iostream>
#include<stack>
using namespace std;

bool isvalidparenthesis(string s){
    stack<char> st;
    for(char c : s){
        if(c == '(' || c == '{' || c == '['){
            st.push(c);
        } 
        else {
            if(st.empty()) return false;  
            char top = st.top();
            st.pop();
            if((c == ')' && top != '(') ||
               (c == '}' && top != '{') ||  
               (c == ']' && top != '[')){
                return false;
            }
        }
    }
    return st.empty(); // if the st is empty
}

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << (isvalidparenthesis(s) ? "Valid" : "Invalid");
    return 0;
}
