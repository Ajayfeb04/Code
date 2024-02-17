#include <iostream>
using namespace std;
int const N = 1e3;
void heapify(int arr[], int n, int curr)
{
    while (2 * curr <= n)
    {
        int leftChild = 2 * curr;
        int rightChild = 2 * curr + 1;
        int maxChild = rightChild;
        if (leftChild <= n && arr[leftChild] > arr[rightChild])
        {
            maxChild = leftChild;
        }
        if (arr[maxChild] <= arr[curr])
        {
            return;
        }
        swap(arr[maxChild], arr[curr]);
        curr = maxChild;
    }
}
void remove(int arr[], int& size){
        swap(arr[1], arr[size]);
        size--;
        heapify(arr, size, 1);
}
void heapSort(int arr[], int n)
{
    // heapify all Parent node into max heap
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    // keep deleting ele from maxHeap will size become zero
    while (n > 0)
    {
        remove(arr, n);
    }
}
int main()
{
    int n = 7;
    int arr[N] = {-1, 60, 10, 80, 50, 5, 20, 70};
    heapSort(arr, n);
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}