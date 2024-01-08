#include <bits/stdc++.h>

using namespace std;

class MinStack
{
private:
    stack<int> st;
    stack<int> minSt;
    int minVal = INT_MAX;

public:
    MinStack()
    {
    }

    void push(int val)
    {
        st.push(val);
        minVal = min(val, minSt.empty() ? val : minSt.top());
        minSt.push(minVal);
    }

    void pop()
    {
        st.pop();
        minSt.pop();
    }

    int top()
    {
        if (!st.empty())
        {
            return st.top();
        }
        else
        {
            return -1;
        }
    }

    int getMin()
    {
        if (!minSt.empty())
        {
            return minSt.top();
        }
        else
        {
            return -1;
        }
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main()
{

    // [[],[-2],[0],[-3],[],[],[],[]]
    // [null,null,null,null,-3,null,0,-2]
    MinStack *obj = new MinStack();
    obj->push(-2);
    obj->push(0);
    obj->push(-3);
    cout << "min: " << obj->getMin() << endl;
    obj->pop();
    cout << "top: " << obj->top() << endl;
    cout << "min: " << obj->getMin() << endl;

    return 0;
}