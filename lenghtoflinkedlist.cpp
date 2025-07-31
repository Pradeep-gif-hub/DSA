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

    // Make this static
    static Node* convert(vector<int>& arr) {
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for (int i = 1; i <arr.size(); i++) {
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = temp;
        }
        return head;
    }
};

int main() {
    vector<int> arr = {2, 3, 5, 1, 3, 4, 7, 8};
    int cnt = 0;
    Node* head=Node:: convert(arr);
    Node* temp = head;
    while (temp) {
    cout << temp->data << " " ;
    temp = temp->next;
    cnt++;
}
cout<< "The total number Of Nodes are: "<< cnt << endl;

}