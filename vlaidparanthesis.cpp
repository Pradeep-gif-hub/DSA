#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>;
using namespace std;
bool validstring(string s){
    stack<int>open,star;

    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            open.push(i);

        }
        else if(s[i]=='*'){
            star.push(i);

        }
        else{
            if(!open.empty()){
                open.pop();
            }
            else if(!star.empty()){
                star.pop();
            }
            else{
                return false;
            }
        }
    }
    while (!open.empty() && !star.empty()) {
            if (open.top() > star.top()) { 
                return false; // '*' must be after '('
            }
            open.pop();
            star.pop();
        }
          return open.empty();
    }
int main(){
        string s;
        cout<<"Enter the stirng s: ";
        cin>> s;
        cout<<validstring(s);
        return 0;
}