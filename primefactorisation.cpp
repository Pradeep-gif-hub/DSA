#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int factorisation(int n){
    vector<int>list;
    while(n!=0){
        if(n%2==0){
        list.push_back('2');
        n=n/2;
        }
        else if(n%3==0){
            list.push_back('3');
            n=n/3;
        }
        else if(n%5==0){
            list.push_back('5');
            n=n/5;
        }
    return list[0];
}
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<"The obtained list of prime factors are as: ";
    cout<< factorisation(n) <<endl;
    return 0; 
}
