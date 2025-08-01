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

    Node(int data1, Node* back1, Node* next1) {
        data = data1;
        back = back1;
        next = next1;
    }
};

Node* insertion(vector<int> arr, int val) {
    if (arr.empty()) return new Node(val);

    Node* head = new Node(arr[0]);
    Node* prev = head;

    // Create the doubly linked list
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        temp->back = prev;
        prev = temp;
    }

    // Insert val at the end of the list
    Node* newNode = new Node(val);
    prev->next = newNode;
    newNode->back = prev;

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
    vector<int> arr = {2, 6, 4, 8, 9, 4, 1, 5, 8, 0};
    int val = 99; // v to insert
    Node* head = insertion(arr, val);
    printList(head);
    return 0;
}
