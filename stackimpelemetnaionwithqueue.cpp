#include <queue>
using namespace std;

class MyStack {
private:
    queue<int> q;

public:
    MyStack() {
    }
    
    void push(int x) {
        q.push(x);
        int sz = q.size();
        // we ahve to make it like LIFO so in order to do it we make it revrse so that the q.front comes at first fro top...
        for(int i = 0; i < sz - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    int pop() {
        int val = q.front();//The frist val gets deleted since the stack formation is being done
        q.pop();
        return val;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};
#include <queue>
using namespace std;

class MyStack {
private:
    queue<int> q;

public:
    MyStack() {
    }
    
    void push(int x) {
        q.push(x);
        int sz = q.size();
        // we ahve to make it like LIFO so in order to do it we make it revrse so that the q.front comes at first fro top...
        for(int i = 0; i < sz - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    int pop() {
        int val = q.front();//The frist val gets deleted since the stack formation is being done
        q.pop();
        return val;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};
