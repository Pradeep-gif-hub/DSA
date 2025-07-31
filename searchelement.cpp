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

    // Convert array to linked list
    static Node* arraymaking(vector<int>& arr) {
        if (arr.empty()) return nullptr;
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for (int i = 1; i < arr.size(); i++) {
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = temp;
        }
        return head;
    }

    // Search for a target in the linked list
    static Node* search(Node* head, int target) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == target)
                return temp;  // Return pointer to the node
            temp = temp->next;
        }
        return nullptr;  // Not found
    }
};

int main() {
    vector<int> arr = {2, 3, 4, 5, 7, 5, 9, 0, 1};
    int target;
    cout << "Enter the target to search in the linked list: ";
    cin >> target;

    Node* head = Node::arraymaking(arr);

    Node* result = Node::search(head, target);
    if (result != nullptr)
        cout << "Found " << target << " at node with address: " << result << endl;
    else
        cout << "Target " << target << " not found in the list." << endl;

    return 0;
}
