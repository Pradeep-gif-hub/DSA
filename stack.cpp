#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    st.push(1);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    st.emplace(6); // Works like push but more efficient
    cout << st.size() << " ";

    cout << st.top() << " "; // Will print 6
    cout<< st.empty() << " ";

    stack<int> copy = st;
while (!copy.empty()) {// we can not iterate over a stack as for(auto it: st) { cout<< it;} 
    cout << copy.top() << " "; //so we use new logic by copying a stack and then reading by top adn then pop respectively...
    copy.pop();// copying is necessary as the stack gets deleted so we need to retrieve it by making a  DEEP copy...
}


    return 0;
}
 