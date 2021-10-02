/*
 * @lc app=leetcode id=232 lang=cpp
 *
 * [232] Implement Queue using Stacks
 */

// @lc code=start
#include <stack>
using namespace std;
class MyQueue
{
public:
    /** Initialize your data structure here. */
    stack<int> Arr;
    MyQueue()
    {
        Arr = {};
    }

    /** Push element x to the back of queue. */
    void push(int x)
    {
        stack<int> temp;
        while (!Arr.empty())
        {
            temp.push(Arr.top());
            Arr.pop();
        }
        Arr.push(x);
        while (!temp.empty()){
            Arr.push(temp.top());
            temp.pop();
        }
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop()
    {
        int x = Arr.top();
        Arr.pop();
        return x;
    }

    /** Get the front element. */
    int peek()
    {
        return Arr.top();
    }

    /** Returns whether the queue is empty. */
    bool empty()
    {
        return Arr.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end
