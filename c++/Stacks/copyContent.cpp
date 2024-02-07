// Copy content of one stack to another in same order

#include <iostream>
#include <stack>
using namespace std;

stack<int> copyStack(stack<int> &input)//This function copyStack takes a reference to a stack<int> as input and returns a new stack with the same elements in reverse order.
{
    stack<int> temp;
    while (! input.empty())
    {
        // do the process till the time input stack does not the empty
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }

    stack<int> result;
    while (! temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        result.push(curr);
    }
    return result;
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> res = copyStack(st);
    while (! res.empty())
    {
        int curr = res.top();
        cout << curr << endl;
        res.pop();
    }

    return 0;
}






// #include <iostream>
// #include <stack>
// using namespace std;

// stack<int> copyStack(stack<int> &input)//This function copyStack takes a reference to a stack<int> as input and returns a new stack with the same elements in reverse order.
// {
//     stack<int> temp;
//     while (! input.empty())
//     {
//         // do the process till the time input stack does not the empty
//         int curr = input.top();
//         input.pop();
//         temp.push(curr);
//     }
//     return temp;

    
// }
// int main()
// {
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     stack<int> res = copyStack(st);
//     while (! res.empty())
//     {
//         int curr = res.top();
//         res.pop();
//         cout << curr << endl;
//     }

//     return 0;
// }