//Recursive way
#include <iostream>
using namespace std;
int binaryRecursive(int arr[], int n, int target, int lo, int hi ){
    if(lo>hi){
        return -1;
    }
    int mid = (lo+hi)/2;
    if(arr[mid] == target){
        return mid;
    }
    if(arr[mid]<target)
    return binaryRecursive(arr, n, target, mid+1, hi);
    else{
        return binaryRecursive(arr, n, target, lo, mid-1);
    }

}

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>> arr[i] ;
    }
    cout<<"Enter target element: "<<endl;
    int target;
    cin>>target;
    cout<<binaryRecursive(arr, n, target, 0, n-1);
    return 0;
}



// #include<iostream>
// using namespace std;
// int binarySearch(int arr[], int n, int target){
//     int lo = 0;
//     int hi = n-1;
//     while(lo<=hi){
//         int mid = (lo + hi)/2;//or lo + (hi-lo)/2
//         if(arr[mid] == target){
//             return mid;
//         }
//         else if(arr[mid]<target){
//             //discard the left of mid
//             lo = mid+1;
//         }else{
//             //discard the right of mid
//             hi = mid -1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cout<<"Enter the size of array: "<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cin>> arr[i] ;
//     }
//     cout<<"Enter target element: "<<endl;
//     int target;
//     cin>>target;
//     cout<<binarySearch(arr, n, target);
//     return 0;
// }
