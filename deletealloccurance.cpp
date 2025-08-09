#include <iostream>
#include <vector>
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

// Create a doubly linked list
Node* conversion(vector<int>& arr) {
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

// Delete all occurrences of 'val'
Node* deleteAllOccurrences(Node* head, int val) {
    Node* curr = head;
    while (curr != nullptr) {
        if (curr->data == val) {
            Node* toDelete = curr;

            // relink previous node
            if (curr->back) curr->back->next = curr->next;
            else head = curr->next; // if deleting head

            // relink next node
            if (curr->next) curr->next->back = curr->back;

            curr = curr->next;
            delete toDelete;
        }
        else {
            curr = curr->next;
        }
    }
    return head;
}

// Print list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 2, 5};
    Node* head = conversion(arr);

    cout << "Original list: ";
    printList(head);

    head = deleteAllOccurrences(head, 2);

    cout << "After deleting 2s: ";
    printList(head);

    return 0;
}
