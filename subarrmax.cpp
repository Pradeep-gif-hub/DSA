#include<iostream>
#include<vector>
using namespace std;
int maxsub(vector<int>&arr){
    int n=arr.size();
    int total=0;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=0;
            int maxm=arr[j];
            for(int k=i;k<j;k++){
                maxm=max(maxm,arr[k]);
                ans.push_back(maxm);

            }
        int total+=maxm;
        }
    }
    return total;
}
int main(){
    vector<int>arr={2,5,1,3,67,8,94,12,0,1};
    cout<<maxsub(arr);
    return 0;
    
}