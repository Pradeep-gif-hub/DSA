class MyQueue {
private:
    stack<int> in, out;

public:
    MyQueue() {}
    void push(int x) {
        in.push(x);
    }

    int pop() {
        peek(); // ensure out has the current front
        int val = out.top();
        out.pop();
        return val;
    }

    int peek() {
        if (out.empty()) {
            while (!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }
        return out.top();
    }

    bool empty() {
        return in.empty() && out.empty();
    }
};
