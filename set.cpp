#include<iostream>
#include<set>
using namespace std;
int main(){// time complexity==log(n)......
    set<int> st;//major functions are find,count,cinsert.........
    st.insert(1);
    st.insert(2);
    st.emplace(4);
    st.insert(2);//ONLY STORES THE UNIQUE VALUES.....
    st.insert(3);//
    st.insert(5);
    st.erase(3);
    for(auto it:st){
        cout<< it<< " ";

    }
    return 0;

}


