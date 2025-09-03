#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cctype>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>maxheap;
    vector<int>arr={7,10,4,3,20,15};
    int k=3;
    int n=arr.size();
    for(int i=0;i<n;i++){
        maxheap.push(arr[i]);
        if(maxheap.size()>k){
            maxheap.pop();
        }
    }
    cout<<maxheap.top();
    return 0;
}