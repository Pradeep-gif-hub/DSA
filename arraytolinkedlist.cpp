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

    // Use static to call without creating an object
    static Node* convert(vector<int>& arr) {
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for (int i = 1; i < arr.size(); i++) {
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = temp;
        }
        return head;
    }
};

int main() {
    vector<int> arr = {2, 3, 4, 5, 7, 8, 9, 0};

    // Call the convert function
    Node* head = Node::convert(arr);

    // Print the linked list
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
