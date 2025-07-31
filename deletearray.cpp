#include<iostream>
#include<vector>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

// Function to create a linked list from a vector
Node* createList(const vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* current = head;

    for (size_t i = 1; i < arr.size(); ++i) {
        current->next = new Node(arr[i]);
        current = current->next;
    }

    return head;
}

// Function to remove the first node from the list
Node* remove(Node* head) {
    if (head == nullptr) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

// Function to print the linked list
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {12, 4, 5, 6, 7, 8};
    Node* head = createList(arr);

    head = remove(head);
    head = remove(head);

    print(head);
}
