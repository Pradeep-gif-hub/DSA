#include<iostream>
#include<vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* back1 = nullptr) {
        data = data1;
        back = back1;
        next = nullptr;
    }
};

Node* duallist(vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {2, 5, 7, 8, 4, 1, 9, 6, 7};
    Node* head = duallist(arr);
    printList(head);
    return 0;
}
