#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibo(n-1) + fibo(n-2); //OR
    // int ans = fibo(n-1) + fibo(n-2);
    //return ans;
}

int main(){
    int num;
    cout<<"How Many Number Of fibonacci series you want: ";
    cin>>num;
    cout<<"Printing of fibonacci series"<<endl;
    for(int i=0; i<num; i++){
        cout<<" "<<fibo(i);
    }

    return 0;
}