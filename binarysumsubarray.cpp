#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarysum(vector<int>& arr,int goal) {
    vector<pair<int,int>> ans;
    for (int i = 0; i < arr.size(); i++) {
        int cnt=0;
        for (int j = i; j < arr.size(); j++) {
            cnt+=arr[j];
            if (cnt==goal) {
                cnt+=1;
            }
        }
        return cnt;
}
    }
    

int main() {
    vector<int> arr ={1,0,1,0,1};
    int goal;
    cout<<"Enter the number sum to be fetched as: ";
    cin>>goal;
    cout << binarysum(arr,goal) << endl; // print the count
    return 0;
}
