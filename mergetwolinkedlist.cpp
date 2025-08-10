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

Node* conversion(vector<int>& arr) {
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

vector<int> sorting(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    return arr;
}

Node* mergeSortedLists(Node* n1, Node* n2) {
    Node dummy(-1);
    Node* tail = &dummy;

    while (n1 != nullptr && n2 != nullptr) {
        if (n1->data <= n2->data) {
            tail->next = n1;
            n1->back = tail;
            n1 = n1->next;
        } else {
            tail->next = n2;
            n2->back = tail;
            n2 = n2->next;
        }
        tail = tail->next;
    }

    if (n1) {
        tail->next = n1;
        n1->back = tail;
    }
    if (n2) {
        tail->next = n2;
        n2->back = tail;
    }

    return dummy.next;
}

void printList(Node* head) {
    Node* it = head;
    while (it != nullptr) {
        cout << it->data << " ";
        it = it->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr1 = {2, 5, 7, 8, 5, 2, 5};
    vector<int> arr2 = {4, 8, 2, 7, 5, 4, 1, 0, 5, 8};

    vector<int> a1 = sorting(arr1);
    vector<int> a2 = sorting(arr2);

    Node* h1 = conversion(a1);
    Node* h2 = conversion(a2);

    Node* res = mergeSortedLists(h1, h2);

    printList(res);
    return 0;
}
