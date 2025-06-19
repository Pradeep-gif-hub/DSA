//problem 1---------N times to print Name

// #include<iostream>
// using namespace std;
// void rec(int n,string name){ 
//     if(n!=0) {
//         cout<< name << endl;
//         n=n-1;
//         rec(n,name);
//     }

// }
// int main(){
//     int n;
//     cin>> n;
//     string name;
//     cin>> name;
//     rec(n,name);
//     return 0;
// }


// Problem2----- Print number from 1 to n;;

// #include<iostream>
// using namespace std;

// void rec(int t, int n){
//     if (t > n) return;
//     cout << t << endl;
//     rec(t + 1, n);
// }

// int main(){
//     int n;
//     cin >> n;
//     rec(1, n);
//     return 0;
// }

//Problem 3---------N  to 1
#include<iostream>
using namespace std;

void rec(int n){
    if (n!=0)
{
    cout<< n <<endl;
    n=n-1;
    rec(n);
}
}
int main(){
    int n;
    cin>> n;
    rec(n);
    return 0;
}