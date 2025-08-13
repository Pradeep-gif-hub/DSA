#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxones(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        int len=0;
        while(arr[i]==1 && arr[i]!=arr.end()){
            len+=1;
            continue;
        }
        return len;

    }
}
int main(){
    vector<int>arr={1,1,1,1,0,0,1,1,0,1,1,1,1,0,3,4};
    return maxones(arr);
    return 0;
}