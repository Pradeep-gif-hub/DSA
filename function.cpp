#include<iostream>
using namespace std;
void name(string n){
    cout<<"Your Name is:" << n;
}
int main(){
    string n;
    cout<< "Enter the name";
    cin>> n;
    name(n); 
    return 0;

}