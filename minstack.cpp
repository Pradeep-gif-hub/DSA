#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    stack<pair<int,int>> st; // stack stores {value, min till now}

    //push values with min tracking
    st.push({10, 10});
    st.push({15, min(15, st.top().second)});
    st.push({12, min(12, st.top().second)});

    // get min
    cout << "Current Min: " << st.top().second << endl;

    st.pop();
    cout << "Min after pop: " << st.top().second << endl;

    return 0;
}
