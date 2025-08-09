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

    //function to create a doubly linked list from a vector....
    Node* createList(const vector<int>& arr) {

        if (arr.empty()) return nullptr;
        Node* head = new Node(arr[0]);
        Node* curr = head;
        for (int i = 1; i < arr.size(); ++i) {
            Node* temp = new Node(arr[i]);
            curr->next = temp;
            temp->back = curr;
            curr = temp;
        }
        return head;
    }

    // function to delete all nodes in a linked list...
    Node* deletenode(Node* head) {
        while (head != nullptr){
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        return nullptr; // list is deleted,so return nullptr...
    }

    int main() {
        vector<int> arr = {2, 6, 4, 8, 9, 6, 2, 1, 7};

        // Create the list
        Node* head = createList(arr);

        // Delete the list
        head = deletenode(head);
        return 0;
    }
       