#include<iostream>
#include<vector>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* back;
Node(int data1){
    data=data1;
    next=nullptr;
    back=nullptr;
}
Node(int data1, Node* next1, Node* back1){
    data=data1;
    next=next1;
    back=back1;
}
};
Node* conversion(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        prev->next=temp;
        temp->back=prev;
        prev=temp;
    }
    return head;
    }
Node* removeduplicate(Node* head) {
    Node* it = head;
    while (it != nullptr && it->next != nullptr) {
        if (it->data == it->next->data) {
            Node* duplicate = it->next;
            it->next = it->next->next;
            if (it->next) it->next->back = it;
            delete duplicate;
        } else {
            it = it->next;
        }
    }
    return head;
}
Node* printList(Node* head){
    Node* it=head;
    while(it!=nullptr){
        cout<<it->data;
        it=it->next;
    }
    return head;
}
int main(){
    vector<int>arr={3,5,7,2,8,0,5,6};
    Node* head=removeduplicate(head);
    printList(head);
    return 0;
}