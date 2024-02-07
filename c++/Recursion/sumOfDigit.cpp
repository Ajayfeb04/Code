#include<iostream>
using namespace std;
int sum(int n){
    if(n<10){
        return n;
    }
    return n%10 + sum(n/10);
}

int main(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    cout<<" sum of digit of your number:"<<endl;
        cout<<sum(num);
    return 0;
}