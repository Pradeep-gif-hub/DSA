#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int finding(vector<int>&arr,int k){
    int n=arr.size();
    int counter=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k){
                counter+=1;

            }

        }
    }
}
int main(){
    int n;
    cout<<"Enter the numer of element of the Array";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>> arr[i];

    }
    int k;
    cout<< "Enter the number sum u wanna get: ";
    cin>>k;
    cout<<finding(arr,k);
    return 0;
}

