#include<iostream>
using namespace std;
int main(){
    int n;
    int temp;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    // Bubble sort begin
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i-1); j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                // swap(arr[j], arr[j+1]); 
            }
        }
    }
    cout<<"Sorted array:";
    for(int i=0; i<n; i++){
        cout<<" "<<arr[i];
    }
    return 0;
}