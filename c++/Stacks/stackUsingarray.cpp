// #include <iostream>
// #include <stack>
// #include <limits.h>
// using namespace std;
// class Stack
// {
//     int capacity;
//     int *arr;
//     int top;

// public:
//     Stack(int c)
//     {
//         this->capacity = c;
//         arr = new int[c];  //using dynamic memory allocation
//         this->top = -1;
//     }
//     void push(int data)
//     {
//         if (this->top == this->capacity - 1)
//         {
//             cout << "Overflow\n";
//             return;
//         }
//         this->top++;
//         this->arr[this->top] = data;
//     }
//     int pop()
//     {
//         if (top == -1)
//         {
//             cout << "Underflow\n";
//             return INT_MIN;
//         }
//         this->top--;
//     }
//     int getTop()
//     {
//         if (this->top == -1)
//         {
//             cout << "Underflow\n";
//             return INT_MIN;
//         }
//         return this->arr[this->top];
//     }
//     bool isEmpty()
//     {
//         return this->top = -1;
//     }
//     int size()
//     {
//         return this->top + 1;
//     }
//     bool isFull()
//     {
//         return this->top == this->capacity - 1;
//     }
// };
// int main()
// {
//     Stack st(5);
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     cout << st.getTop() << endl;
//     st.push(6);
//     // cout << st.getTop() << endl;

//     return 0;
// }




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
    st.push(5);
    cout << st.getTop() << endl;
    st.push(6);
    // cout << st.getTop() << endl;

    return 0;
}