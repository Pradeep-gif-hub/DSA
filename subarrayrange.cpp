#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int rangesubarray(vector<int>&arr){
    int n=arr.size();
    int total=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int maxx=arr[j];
            int minn=arr[j]
            for(int k=i;k<j;k++){
                maxx+=max(sum,arr[k]);
                minn=min(minn,arr[k]);
                int diff=sum-minn;
            }
            total+=diff;
            
        }
    }
    return total;
}
int main(){
    vector<int>arr={2,3,65,1,8,4,4,9,77,0};
    cout<<rangesubarray(arr);
    return 0;
    
}
