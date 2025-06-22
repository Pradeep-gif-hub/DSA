#include <iostream>
#include <climits>
using namespace std;

int main() {
    int MaxValue = INT_MAX;
    int c=0;
    while(MaxValue>0){
        MaxValue=MaxValue/2;
        c=c+1;
    }
    cout<< c;
    return 0;
}
