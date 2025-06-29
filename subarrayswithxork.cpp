#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int subarray(vector<int>a,int k){
    int cnt=0;
    int n=a.size();
    int xr=0;
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        xr=xr^a[i];
        int x=xr^k;
        cnt+=mpp[x];
        mpp[xr]++;


    }
    return cnt;

}
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int k;
    cout<<"Enter the target value";
    cin>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    subarray(a,k);
    return 0;

}
