#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1=nullptr, Node* back1=nullptr){
        data = data1;
        next = next1;
        back = back1;
    }
};

Node* conversion(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        temp->back = prev;
        prev = temp;
    }
    return head;
}

vector<int> queuefromlinkedlist(Node* head){
    queue<int>q;
    vector<int> ans;
    Node* it = head;
    while(it != nullptr){
        q.push(it->data);
        it = it->next;
    }
    while(!q.empty()){
        ans.push_back(q.front());
        q.pop();
    }
    return ans;
}

int main(){
    vector<int> arr = {2,3,4,5,6,7,8,9,1};
    Node* head = conversion(arr);
    vector<int> ans = queuefromlinkedlist(head);

    for(int x : ans) cout << x << " ";
    return 0;
}
