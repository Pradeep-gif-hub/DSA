#include<iostream>
#include<stack>
using namespace std;

string infixttoprefix(string s){
    stack<char> st;
    int i=0;
    int n=s.size();
    string ans;

    while(i<n){
        if((s[i]>='A' && s[i]<='Z') ||
           (s[i]>='a' && s[i]<='z') ||
           (s[i]>='0' && s[i]<='9')){
            ans += s[i];
        }
        else if(s[i]=='^'){
            st.push(s[i]);
        }
        i++;
    }

    while(!st.empty() && st.top()!='('){
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout << "Prefix: " << infixttoprefix(s) << endl;
    return 0;
}
