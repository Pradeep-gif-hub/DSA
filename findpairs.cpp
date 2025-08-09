#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Node {
    int first;
    int second;
    Node* next;
    Node* back;

    Node(int f, int s) {
        first = f;
        second = s;
        next = nullptr;
        back = nullptr;
    }
    Node(int f, int s, Node* next1, Node* back1) {
        first = f;
        second = s;
        next = next1;
        back = back1;
    }
};

// Convert vector<pair<int,int>> to doubly linked list
Node* conversion(vector<pair<int,int>>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0].first, arr[0].second);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i].first, arr[i].second);
        prev->next = temp;
        temp->back = prev;
        prev = temp;
    }
    return head;
}

// Find all pairs with sum == target
vector<pair<int,int>> findpair(vector<int>& arr, int target) {
    vector<pair<int,int>> ans;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                ans.push_back({arr[i], arr[j]});
            }
        }
    }
    return ans;
}

// Print doubly linked list of pairs
void printList(Node* head) {
    Node* it = head;
    while (it != nullptr) {
        cout << "(" << it->first << ", " << it->second << ") ";
        it = it->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {3, 6, 2, 5, 9, 8, 5, 0};
    int target = 5;

    // Find all pairs
    vector<pair<int,int>> ans = findpair(arr, target);

    // Convert to doubly linked list
    Node* head = conversion(ans);

    // Print linked list
    printList(head);

    return 0;
}
