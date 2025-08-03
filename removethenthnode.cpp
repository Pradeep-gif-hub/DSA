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

// start i from 1 to avoid repeating arr[0]
Node* creation(vector<int>& arr) {
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

// proper removal of node at index n from existing list
Node* removal(Node* head, vector<int>& arr, int n) {
    if (head == nullptr) return nullptr;
    if (n == 0) {
        Node* temp = head->next;
        if (temp) temp->back = nullptr;
        delete head;
        return temp;
    }

    Node* cur = head;
    int count = 0;
    while (cur != nullptr && count < n) {
        cur = cur->next;
        count++;
    }

    if (cur == nullptr) return head;

    Node* prevNode = cur->back;
    Node* nextNode = cur->next;

    if (prevNode) prevNode->next = nextNode;
    if (nextNode) nextNode->back = prevNode;

    delete cur;
    return head;
}

// correct function name match
void printlist(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {2, 6, 3, 1, 0, 7, 6};
    Node* head = creation(arr); // Create the DLL first
    int n = 3; // Remove index 3 (element 1)
    head = removal(head, arr, n);
    printlist(head);
    return 0;
}
