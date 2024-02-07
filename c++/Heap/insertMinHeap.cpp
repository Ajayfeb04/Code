#include <iostream>
using namespace std;
// int const N = 1e3;  //1000
void insertMinHeap(int minHeap[], int &size, int value){
    size++;
    minHeap[size] = value;
    int curr = size;
    while(curr/2 >0 && minHeap[curr/2] > minHeap[curr] ){
        swap(minHeap[curr/2], minHeap[curr] );
        curr = curr/2;
    }
}
int main(){
    int minHeap[] = {-1, 10, 20,30,40,50};
    // int minHeap[N] = {10, 20,30,40,50};
    int size = 5;
    int value = 5; //this ele we want to insert in minHeap
    insertMinHeap(minHeap, size, value);
    for(int i=0; i<=size; i++){
        cout<<minHeap[i]<<" ";
    }
        // cout<<endl;
    return 0;
}