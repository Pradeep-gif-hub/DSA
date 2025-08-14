#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int subwithk(string s, int k){
    vector<pair<char,char>>arr;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
            arr.push_back({s[i],s[j]});
        }
    }
    for(int i=0;i<s.size();i++){

    unordered_set<int> distinct(arr.begin(), arr.end());
    if()


}
