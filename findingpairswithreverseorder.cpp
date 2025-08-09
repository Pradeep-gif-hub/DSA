#include <iostream>
#include <vector>
#include <algorithm>
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

// Convert vector to doubly linked list
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

// Find tail of doubly linked list
Node* findingtail(Node* head) {
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }
    return tail;
}

// Find all pairs with given sum
vector<pair<int, int>> findingpair(Node* head, int target) {
    vector<pair<int, int>> ans;
    if (!head) return ans;
    Node* left = head;
    Node* right = findingtail(head);
    while (left != right && right->next != left) {
        int sum = left->data + right->data;
        if (sum == target) {
            ans.push_back({left->data, right->data});
            left = left->next;
            right = right->back;
        } else if (sum < target) {
            left = left->next;
        } else {
            right = right->back;
        }
    }
    return ans;
}

//print all pairs
void printPairs(const vector<pair<int, int>>& pairs) {
    for (auto& p : pairs) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;
}
int main() {
    vector<int> arr = {2, 3, 4, 6, 1, 8, 6, 0, 9, 4};
    int target = 5;
    Node* head = conversion(arr);
    vector<pair<int, int>> pairs = findingpair(head, target);
    cout << "Pairs with sum:- " << target << ": ";
    printPairs(pairs);
    return 0;
}
