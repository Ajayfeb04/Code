#include <iostream>
#include <limits.h>
using namespace std;
class Stack
{
    int capacity;
    int* arr;
    int top;

public:
    Stack(int c)
    {
        capacity = c;
        arr = new int[c];
        top = -1;
    }
    void push(int data)
    {
        if (top == capacity - 1)
        {
            cout << "Overflow\n";
            return;
        }
        top++;
        arr[top] = data;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "underflow\n";
            return;
        }
        top--;
    }
    int getTop()
    {
        if (top ==-1)
        {
            cout << "underflow\n";
            return INT_MIN;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        return top == -1;
    }
    int size()
    {
        return top + 1;
    }
    bool isFull()
    {
        return top == capacity - 1;
    }
};
int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.size();
    st.push(5);
    cout << st.getTop() << endl;
    st.push(6);
    // cout << st.getTop() << endl;

    return 0;
}

