#include <iostream>
#include <vector>
using namespace std;
class Queue
{
    int front;
    int back;
    vector<int> v;

public:
    Queue()
    {
        back = -1;
        front = -1;
    }
    void enqueue(int data)
    {
        v.push_back(data);
        back++;
        if (back == 0)
        {
            front = 0;
        }
    }
    void deque()
    {
        if (front == back)
        {
            front = -1;
            back = -1;
        
        }
        else
        {
            front++;
        }
    }
    int getFront()
    {
        if (front == -1)
        {
            return -1;
        }
        return v[front];
    }
    bool isEmpty()
    {
        return front == -1;
    }
};
int main()
{
    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.deque();
    qu.deque();
    qu.enqueue(40);
    while (not qu.isEmpty())
    {
        cout << qu.getFront() << " ";
        qu.deque();
    }
    return 0;
}


// #include <iostream>
// using namespace std;

// class Queue {
// private:
//     int front, rear, capacity;
//     int* array;

// public:
//     Queue(int size) {
//         capacity = size;
//         front = rear = -1;
//         array = new int[capacity];
//     }

//     ~Queue() {
//         delete[] array;
//     }

//     bool isEmpty() {
//         return front == -1;
//     }

//     bool isFull() {
//         return (rear + 1) % capacity == front;
//     }

//     void enqueue(int data) {
//         if (isFull()) {
//             cout << "Queue is full. Cannot enqueue " << data << endl;
//             return;
//         }

//         if (isEmpty()) {
//             front = rear = 0;
//         } else {
//             rear = (rear + 1) % capacity;
//         }

//         array[rear] = data;
//         cout << "Enqueued " << data << endl;
//     }

//     void dequeue() {
//         if (isEmpty()) {
//             cout << "Queue is empty. Cannot dequeue." << endl;
//             return;
//         }

//         cout << "Dequeued " << array[front] << endl;

//         if (front == rear) {
//             front = rear = -1;
//         } else {
//             front = (front + 1) % capacity;
//         }
//     }

//     int getFront() {
//         if (isEmpty()) {
//             cout << "Queue is empty." << endl;
//             return -1;
//         }

//         return array[front];
//     }
// };

// int main() {
//     Queue qu(5);

//     qu.enqueue(10);
//     qu.enqueue(20);
//     qu.enqueue(30);

//     cout << "Front element: " << qu.getFront() << endl;

//     qu.dequeue();
//     qu.dequeue();

//     qu.enqueue(40);
//     qu.enqueue(50);

//     while (!qu.isEmpty()) {
//         cout << "Front element: " << qu.getFront() << endl;
//         qu.dequeue();
//     }

//     return 0;
// }
