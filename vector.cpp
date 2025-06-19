#include <iostream>
#include <vector>
using namespace std;

void explainVector() {
    vector<int> v;
    v.push_back(10);
    v.emplace_back(5);
    v.emplace_back(15);
    v.emplace_back(52);
    v.emplace_back(54);
    v.emplace_back(75);
    v.emplace_back(59);
    v.emplace_back(57);
    v.erase(v.begin()+2);
    v.insert(v.begin(),2,200);
    cout <<"The Stack is : ";
    cout << "First element: " << v[0] <<","<< v[1] << endl;
    cout<<v.size()<< endl;
    cout<<v.empty()<< endl;
    for ( auto it :v){
    cout<< it<<" "; 
}

}

int main() {
    explainVector();
    return 0;
}


