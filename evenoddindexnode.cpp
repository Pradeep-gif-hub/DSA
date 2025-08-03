#include<iostream>
#include<vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* back;

    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }

    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }
};

// Creating the doubly linked list from a vector
Node* creation(vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        temp->back = prev;
        prev = temp;
    }

    return head;
}

Node* oddeven(Node* head){
    if (!head || !head->next || !head->next->next) return nullptr;

    int t1 = head->data;

    Node* cur = new Node(t1);
    head = head->next->next;

    if (!head) return cur;

    int t2 = head->data;
    Node* temp = new Node(t2);
    cur->next = temp;
    temp->back = cur;

    return cur;
}

void printList(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}           

int main(){
    vector<int> arr = {2, 3, 65, 7, 96, 93, 3};
    Node* original = creation(arr);
    Node* head = oddeven(original);
    printList(head);
    return 0;
}
