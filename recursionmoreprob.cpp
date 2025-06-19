//Problem-----5 to find the sum of nnumbers 
// #include<iostream>
// using namespace std;

// int t = 0;
// void sum(int n) {
//     if (n <= 0)
//         return;
//     t += n;
//     sum(n - 1);
// }


// int main(){
//     int n;
//     cin >> n;
//     sum(n);
//     cout << t << endl;
//     return 0;
// }

//Problem--2    To reverse an array......
// #include<iostream>
// using namespace std;
// void f(int i,int arr[],int n){
//     if (i>=n/2) return;
//     swap(arr[i],arr[n-i-1]);
//     f(i+1,arr,n);

// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin>> arr[i];
//     f(0,arr,n);
//     for(int i=0;i<n;i++) cout<< arr[i]<<endl;  
//     return 0; 
// }


// USING VECTORS we REVERSE 

// #include<iostream>
// #include<vector>
// using namespace std;

// Recursive function to reverse array in-place
// void reverseArray(int i, vector<int>& arr, int n) {
//     if (i >= n / 2) return;
//     swap(arr[i], arr[n - i - 1]);
//     reverseArray(i + 1, arr, n);
// }

// int main() {
//     int n;
//     cin >> n;
    
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) cin >> arr[i];
    
//     reverseArray(0, arr, n);

//     // Print in one line with space
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;
    
//     return 0;
// }

//PROBLME TO chekc whwether its pallindrone or not gievn string;;

// #include<iostream>
// using namespace std;
// bool f(int i,string &s){
//     if(i>=s.size()/2) return true;
//     if(s[i]!=s[s.size()-i-1]) return false;
//     return f(i+1,s);

// }
// int main(){
//     string s;
//     cin>> s;
//     cout<< f(0,s);
//     return 0;
// }


//Problem ----fibaonaciii
#include<iostream>
using namespace std;

int fib(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}
