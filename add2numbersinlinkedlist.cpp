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

    // Creating the doubly linked list from a vector
    Node* creation(vector<int>& arr) {
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

// Add two doubly linked lists like numbers (least significant digit at tail)
Node* addition(Node* a1, Node* a2) {
    Node* t1 = a1;
    Node* t2 = a2;

    // Move to tail of both lists
    while (t1->next) t1 = t1->next;
    while (t2->next) t2 = t2->next;

    Node* result =nullptr;
    int carry = 0;

    while (t1 || t2 || carry) {
        int val1 = t1 ? t1->data : 0;
        int val2 = t2 ? t2->data : 0;

        int sum = val1 + val2 + carry;
        carry = sum / 10;
        int digit = sum % 10;

        Node* temp = new Node(digit);
        temp->next = result;
        if (result) result->back = temp;
        result = temp;

        if (t1) t1 = t1->back;
        if (t2) t2 = t2->back;
    }

    return result;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> a1 = {2, 3, 5, 7, 8, 3, 2};
    vector<int> a2 = {3, 2, 6, 4, 6, 3};

    Node* h1 = creation(a1);
    Node* h2 = creation(a2);

    Node* head = addition(h1, h2);
    printList(head);

    return 0;
}
