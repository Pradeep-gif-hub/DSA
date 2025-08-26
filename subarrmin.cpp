#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int minarr(vector<int>&arr){
    int total=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=0;
            int mn=arr[j];
            for(int k=i;k<n;k++){
                mn=min(mn,arr[k]);
                ans.push_back(mn);
                cout<<","<<endl;


            }
            total+=mn;
        }
    }
    return total;
}
int main(){
    vector<int>arr={2,5,3,7,8,111,5,3,2,0,1};
    cout<<minarr(arr);
    return 0;
}