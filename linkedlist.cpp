#include<iostream>
#include<algorithm>
#include<vector >
using namespace std;
struct Node{
    int data;
    Node* next;
    
    public:
       Node(int data1, Node *next1){
        data=data1;
        next=next1;
    }
    
    };
    int main() {
        vector<int>arr={2,5,8,7};
        Node *y= new Node(arr[3],nullptr);
        cout<<y->data;
    }
