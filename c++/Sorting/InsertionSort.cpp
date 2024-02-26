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
    // Insertion sort begin
    for(int i=1; i<n; i++){
        temp = arr[i];
        int j = i-1;
        while(j>=0 && (arr[j]>temp)){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = temp;
    }
    cout<<"Sorted array:";
    for(int i=0; i<n; i++){
        cout<<" "<<arr[i];
    }
    return 0;
}