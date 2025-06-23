#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int lefts(vector<int> &arr,int n,int sn){
    int n=arr.size();
    int first=arr[0];
    if(arr.empty()) return;
    for(int i=0;i<n;i++){
        arr[sn]=first;
        arr[i]=arr[d-i];

    }
}
int main(){
    int n;
    cout<< "Enter the number of element of the array";
    cin>>n;
    int sn;
    cout<<"Enter the number of left shift to do";
    cin>>sn;
    vector<int>&arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=lefts(arr,n,sn);
    cout<<a;
    return 0;
}