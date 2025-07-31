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

// Insert a value at the end of a linked list created from a vector
Node* insertele(vector<int> arr, int val) {
    if (arr.empty()) {
        return new Node(val);
    }

    Node* head = new Node(arr[0]);
    Node* temp = head;

    // Create initial list
    for (int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    // Insert the new value at the end
    temp->next = new Node(val);

    return head;
}

// Print the linked list
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {2, 3, 5, 7, 8, 4};
    int val;
    cout << "Enter the value to be inserted: ";
    cin >> val;

    Node* head = insertele(arr, val);
    print(head);
}
