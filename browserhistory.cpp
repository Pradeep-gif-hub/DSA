#include <iostream>
#include <string>
using namespace std;

struct Node {
    string url;
    Node* prev;
    Node* next;
    Node(string u) : url(u), prev(nullptr), next(nullptr) {}
};

class BrowserHistory {
private:
    Node* current;
public:
    BrowserHistory(string homepage) {
        current = new Node(homepage);
    }

    void visit(string url) {
        Node* newNode = new Node(url);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
        
        // clear forward history
        Node* temp = newNode->next;
        while (temp) {
            Node* toDelete = temp;
            temp = temp->next;
            delete toDelete;
        }
        newNode->next = nullptr;
    }

    string back(int steps) {
        while (steps > 0 && current->prev != nullptr) {
            current = current->prev;
            steps--;
        }
        return current->url;
    }

    string forward(int steps) {
        while (steps > 0 && current->next != nullptr) {
            current = current->next;
            steps--;
        }
        return current->url;
    }
};

int main() {
    BrowserHistory object("leetcode.com");
    object.visit("google.com");
    object.visit("facebook.com");
    object.visit("youtube.com");

    cout << object.back(1) << endl;     // facebook.com
    cout << object.back(1) << endl;     // google.com
    cout << object.forward(1) << endl;  // facebook.com

    object.visit("linkedin.com");
    cout << object.forward(2) << endl;  // linkedin.com
    cout << object.back(2) << endl;     // google.com
    cout << object.back(7) << endl;     // leetcode.com
}
