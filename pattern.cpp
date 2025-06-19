#include<iostream>
using namespace std;
//Pattern 1

void pattern1(int n){{
    for (int i=0;i<n;i++){ // the outer loop is mainly for the rows
        for (int j=0;j<=i;j++){ //The inner loop is fro the the columns
            cout<< "*" ;
        }
        cout<< endl;
    }

}
}

//Pattern 2

void pattern2(int n){
    for (int i=1;i<n;i++){
        for (int j=1;j<=i;j++){
            cout<< j;
        }
        cout<< endl;
    }
}

//Pattern 3

void pattern3(int n){
    for (int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<< i;

        }
        cout<< endl;
    }
}

//Pattern 4
void pattern4(int n){
    for(int i=0;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<< "*";

        }
        cout<< endl;
    }
}

//Pattern 5

void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<< j <<" ";

        }
        cout << endl;

    }
}

//pattern 6
void pattern6(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<< "*";
        }
        cout<< endl;
    }
}

//pattern 7

void pattern7(int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            cout<< " ";
    }
    for(int j=0;j<2*n-(2*i + 1); j++){
        cout<<"*";

    }
    for (int j=0;j<i;j++){
        cout<<" ";
    }
    cout<< endl;
}

}
// Pattern 8

void pattern8(int n){
    int star=1;
    for(int i=0;i<n;i++){
        if(i%2==0) star=1;
        else star=0;
        for(int j=0;j<i;j++){
            cout<< star;
            star=1-star;

        }
        cout<< endl;
    }
}

//pattern9
void pattern9(int n){
    int space=2*(n-1);
    for (int i=0;i<=n;i++){
        for(int j=1;j<=i;i++){
            cout<< j;


        }
            for(int j=1;j<=space;j++)
{
    cout << " ";
}   
for(int j=i;j>=1;j--){
    cout<< j;
} 
cout<< endl;
space-=2;}
}
int main(){
    int n;
    cin>> n;
    pattern9(n);
    return 0;
    }

