/*
 * @lc app=leetcode id=225 lang=cpp
 *
 * [225] Implement Stack using Queues
 */

// @lc code=start
#include <queue>
using namespace std;
class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> Arr;
    MyStack() {
        Arr = {};
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        Arr.push(x);
        for (int i = 0; i < Arr.size() - 1; i++) {
            int tmp = Arr.front();
            Arr.pop();
            Arr.push(tmp);
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int tmp = Arr.front();
        Arr.pop();
        return tmp;
    }
    
    /** Get the top element. */
    int top() {
        return Arr.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return Arr.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end

