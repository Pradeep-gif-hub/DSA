#include<iostream>
#include<vector>
using namespace std;
int linears(int n,int num,vector<int> &arr){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i; }
        
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter teh size of our array: ";
    cin>> n;
    int num;
    cout<<"Enter the linear search to do for ";
    cin>>num;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=linears(n,num,arr);
    cout<< a;
    return 0;

}