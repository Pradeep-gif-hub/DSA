#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;  

int miss(vector<int> &arr, int n){
    int c=0;
    int t=0;

    for (int i=1;i<=n;i++){
        c+=i;
    }
    for(int j: arr){
        t+=j;
        
    }
    int num=c-t;
    return num;
}
int main(){
    int n;
    cout<<"Enter the number of element continusously in the array";
    cin>>n;
    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int b=miss(arr,n);
    cout<< b;
    return 0;

}