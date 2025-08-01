#include<iostream>
#include<vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1 = nullptr, Node* back1 = nullptr) {
        data = data1;
        next = next1;
        back = back1;
    }
};

Node* creation(const vector<int>& arr) {
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

Node* deletion(Node* head, int val) {
    Node* curr = head;

    while (curr != nullptr) {
        if (curr->data == val) {
            if (curr->back) curr->back->next = curr->next;
            if (curr->next) curr->next->back = curr->back;

            // if deleting head node
            if (curr == head) head = curr->next;

            delete curr;
            break; // delete only first occurrence
        }
        curr = curr->next;
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
    vector<int> arr = {3, 4, 6, 87, 9, 5, 2, 5, 5, 7, 8, 3, 0};
    int val = 87;

    Node* head = creation(arr);
    head = deletion(head, val);
    printList(head);

    return 0;
}
