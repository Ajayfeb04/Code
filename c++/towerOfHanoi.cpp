#include<iostream>
using namespace std;
void TOH(int n, char start, char aux, char end){
    if(n == 0){
        return;
    }
    TOH(n-1, start,end, aux);
    cout<<"Move from "<<start<<" to "<<end<<endl;
    TOH(n-1, aux, start, end);
}

int main (){
    int num;
    cout<<"Number of Disk: ";
    cin>>num;
    TOH(num, 'A','B', 'C');

    return 0;
}
