//swap the two value
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"a\n";
    cin>>a;
    cout<<"b\n";
    cin>>b;
    int c;
    c = b; 
    b = a; 
    a=c;
    cout<<"a\n"<<a<<endl;
    cout<<"b\n"<<b<<"\n";
    return 0;

}