#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int maxwindow(vector<int>&arr,int k){
    stack<int>st;
    int n=arr.size();
    int total=0;
    for(int i=0;i<arr.size();i++){
        st.push(arr[i]);
    }
    int i=0;
    int tempmax=0;
    while(i!=i+k){
        if(i>n-k) break;
        else{
        for(int i=0;i<n;i++){
            int tempmax=max(arr.begin()+i,arr.end()+i+k);
        }
        i++;
        }
        total+=tempmax;
        
    }
    return total;
    
}
int main(){
    vector<int>arr={2,4,5,6,-2,2,-1,2,-9,6,7,-3,-1,0};
    int k;
    cout<<"Enter the number to be fecthed: ";
    cin>>k;
    cout<<maxwindow(arr,k);
    return 0;
}