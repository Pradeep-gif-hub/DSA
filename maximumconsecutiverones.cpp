#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxm(int arr[],int n){
    int mx=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt+=1;
            mx=max(mx,cnt);
        }
        else 
        cnt=0;

    }return mx;

}
int main(){
    int n;
    cout<<"Enter the number of element in the array";
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    int a=maxm(arr,n);
    cout<< a;
    return 0;

}