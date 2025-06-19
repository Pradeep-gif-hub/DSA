#include <iostream>
using namespace std;

// int main() {
//     int x;
//     cout << "Enter your age: ";
//     cin >> x;

//     if (x > 18) {
//         cout << "You are an adult";
//     } else {
//         cout << "No, you are not an adult";
//     }

//     return 0;
// } 

int main(){
    int Marks;
    cout <<"Enter Your Marks:";
    cin>> Marks;
    if (Marks < 25){ 
        cout << "Failed";

    }
    else if (Marks >=80 and Marks <= 100 ){
        cout<<" A Grade";
    }
    else if (Marks >= 60 and  Marks <= 79 ){
        cout<<" B Grade";
    }
    else if (Marks >= 50  and  Marks <= 59 ){
        cout<<" C Grade";
    }
    else if (Marks >= 46 and Marks <= 49){
        cout<<" D Grade";
    }
    else if (Marks >= 25 and  Marks <= 45){
        cout<<" E Grade";
    }

}

