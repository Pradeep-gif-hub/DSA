#include<iostream>
#include<vector>
#include<algorithm>
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

Node* sorting(Node* head){
    vector<int> vals;

    // Step 1: extract values
    Node* t1 = head;
    while (t1 != nullptr) {
        vals.push_back(t1->data);
        t1 = t1->next;
    }

    // Step 2: sort values
    sort(vals.begin(), vals.end());

    // Step 3: build new list
    Node* dummy = new Node(-1);
    Node* cur = dummy;

    for (int val : vals) {
        Node* temp = new Node(val);
        cur->next = temp;
        temp->back = cur;
        cur = temp;
    }

    Node* sortedHead = dummy->next;
    if (sortedHead) sortedHead->back = nullptr;
    delete dummy;
    return sortedHead;
}

void printList(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    vector<int> arr = {2,5,3,7,9,5,1,0,4,3};
    Node* head = creation(arr);
    Node* ans = sorting(head);
    printList(ans);
    return 0;
}
    