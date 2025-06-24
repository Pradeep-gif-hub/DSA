#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int buysellstock(vector<int>&price){
    int profit=0;
    int n=price.size();
    int mini=price[0];
    for(int i=0;i< n;i++){
        int cost=price[i]-mini;
        profit=max(profit,cost);
        mini=min(price[i],mini);
    }
    return profit;
}
int main(){
    int n;
    cout<<"Enter the number of stock u wanna input for sell adn buys";
    cin>>n;
    vector<int>price(n);
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    int a=buysellstock(price);
    cout<<a ;
    return 0;
}