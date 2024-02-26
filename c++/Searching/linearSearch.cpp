#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter searching element: ";
    cin>>key;
    int ans = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}