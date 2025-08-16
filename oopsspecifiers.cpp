#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Circle{
    private: 
       double radius;
       double computearea()
       {
        return 3.14*radius*radius;

       }
    public: 
       void setrad(double r){
        radius=r;
       }
       double getrad(){
        return radius;
       }
};
int main(){
    Circle obj;
    obj.setrad(5);
    cout<<obj.getrad()<<endl;
}