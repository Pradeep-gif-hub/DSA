#include<iostream>
using namespace std;
int maxx(int x,int y){
    if (x>y) return x;
    else return y;

}
int minn(int x,int y){
    if (x>y) return y;
    else return x;
}
int main(){
    int x,y;
    cin>> x >> y;
    int z=maxx(x,y);
    int w=minn(x,y);
    cout<< "The maximum number out of these two is: " << z << endl;
    cout<< "The minimum number of these two is: "<< w;
    return 0;

}


