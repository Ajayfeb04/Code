#include <iostream>
using namespace std;
void insertMinHeap(int minHeap[], int &size, int value){
    size++;
    minHeap[size] = value;
    int curr = size;
    while(curr/2 >0 && minHeap[curr/2] > minHeap[curr] ){
        swap(minHeap[curr/2], minHeap[curr] );
        curr = curr/2;
    }
}
void removeMinHeap(int minHeap[], int &size){
    minHeap[1] = minHeap[size];
    size--;
    int curr = 1;
    while(2*curr <= size){  //looping till curr node has child nodes
        int leftChild = 2*curr;
        int rightChild = 2*curr + 1;
        int minChild = leftChild;
        if(rightChild <= size && minHeap[rightChild]<minHeap[leftChild]){
            minChild = rightChild;
        }
        if(minHeap[minChild]>=minHeap[curr]){
            return ;
        }
        swap(minHeap[curr], minHeap[minChild]);
        // swap(minHeap[minChild], minHeap[curr] );
        curr = minChild;
    }
}

int main(){
    int minHeap[] = {-1, 10, 20,30,40,50};
    int size = 5;
    int value = 5; //this ele we want to insert in minHeap
    insertMinHeap(minHeap, size, value);
    for(int i=0; i<=size; i++){
        cout<<minHeap[i]<<" ";
    }cout<<endl;
    removeMinHeap(minHeap, size);
    for(int i=0; i<=size; i++){
        cout<<minHeap[i]<<" ";
    }
    return 0;
}



// void removeMinHeap(int minHeap[], int &size): Declares a function named removeMinHeap responsible for removing the minimum element from the min heap.

// minHeap[1] = minHeap[size];: Replaces the root (minimum element) with the last element in the heap.

// size--;: Decrements the size of the heap.

// int curr = 1;: Initializes a variable curr with the index of the root.

// while(2*curr <= size): Initiates a loop that continues until the current element has at least one child.

// int leftChild = 2*curr;: Calculates the index of the left child.

// int rightChild = 2*curr + 1;: Calculates the index of the right child.

// int minChild = leftChild;: Assumes the left child is the minimum child.

// if(rightChild <= size && minHeap[rightChild] < minHeap[leftChild]): Checks if the right child exists and has a smaller value than the left child.

// minChild = rightChild;: Updates minChild to the index of the right child if it is smaller.

// if(minHeap[minChild] >= minHeap[curr]) return;: Checks if the minimum child's value is greater than or equal to the current element; if true, the heap property is maintained, and the function returns.

// swap(minHeap[minChild], minHeap[curr]);: Swaps the current element with the minimum child.

// curr = minChild;: Updates the current index to the index of the minimum child.