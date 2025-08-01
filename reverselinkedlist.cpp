#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* back1 = nullptr, Node* next1 = nullptr) {
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
        temp->back = prev;
        prev->next = temp;
        prev = temp;
    }

    return head;
}

void printReverse(Node* head) {
    if (!head) return;

    // go to last node
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    // print in reverse using back pointer
    
    while (tail != nullptr) {
        cout << tail->data << " ";
        tail = tail->back;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {3, 5, 6, 8, 9, 4, 0};
    Node* head = creation(arr);

    cout << "Reverse order: ";
    printReverse(head);
    return 0;
}
