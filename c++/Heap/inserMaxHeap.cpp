#include<iostream>
using namespace std;
void insertMaxHeap(int maxHeap[], int &size, int value){
    size++;
    maxHeap[size] = value;
    int curr = size;
    while(curr/2 >0 && maxHeap[curr/2]<maxHeap[curr]){
        swap(maxHeap[curr],maxHeap[curr/2]);
        curr = curr/2;
    }
}
int main(){
    int maxHeap[] = {-1, 60,50,40,30,20,10,5};
    int size = 7;
    int value = 100;
    insertMaxHeap(maxHeap, size, value);
    for(int i= 0; i<=size; i++){
        cout<<maxHeap[i]<<" ";
    }
    return 0;

}