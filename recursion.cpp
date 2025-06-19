#include<iostream>
using namespace std;
int c=0;
void rec(){ //If the recusirve fucnrion is infintetaely times running and leassidng no space to store further data
    // it is then called STACK OVERFLOW..... 
    if(c==3) return;
    cout<< c<<endl;
    c=c+1;
    rec();
} 
int main(){
    rec();
    return 0;

}