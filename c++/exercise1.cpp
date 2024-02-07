// Q.1- Print the ASCII value of character "U"

// #include<iostream>
// using namespace std;
// int main()
// {

//     cout<<"ASCII value of u is" << (int)'u' <<endl;
//     return 0;
// }

// Q2- write a c++ program to take length and breath of a rectangle and print its area

// #include <iostream>
// using namespace std;
// int main()
// {
//     int length = 10;
//     int breath = 20;
//     cout << "Length:"<<length << endl;
//     cout << "Breath:" << breath<<endl;
//     int area = length * breath;
//     cout << "Area is" << area << endl;
//     return 0;
// }

// Q-3 Write a program to calculate the the cube of a number
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 2;
//     int cube;
//     cout << "number is" << x << endl;
//     cout << "cube of the number is" << cube << endl;
//     return 0;
// }

// Q-4 write a program to find size of basic data types.
// #include <iostream>
// using namespace std;
// int main()
// {
//     cout<<"Size of fundamental data types"<<endl;
//     cout <<"The sizeof(char)" << sizeof(char)<<"bytes\n";
//     cout <<"The sizeof(short)" << sizeof(short)<<"bytes\n";
//     cout <<"The sizeof(int)" << sizeof(int)<<"bytes\n";
//     cout <<"The sizeof(long)" << sizeof(long)<<"bytes\n";
//     cout <<"The sizeof(double long)" << sizeof(double long)<<"bytes\n";
//     cout <<"The sizeof(float)" << sizeof(float)<<"bytes\n";
//     cout <<"The sizeof(double)" << sizeof(double)<<"bytes\n";
//     cout <<"The sizeof(long double)" << sizeof(long double)<<"bytes\n";
//     cout <<"The sizeof(bool)" << sizeof(bool)<<"bytes\n";
    
    
// }

//Q-5 Print odd number by taking input from user
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     i=1;
//     while(i<=n){
//         if(i%2!=0){
//             cout<<i<<" ";
//         }
//         i++;
//     }

// }

//Q6 Print first prime number
#include <iostream>
using namespace std;
int main()
{
    int n,p=2,i;
    cout<<"Enter value of n: ";
    cin>>n;
    while(n>0){
        for(i=2; i<=p;i++){
            if(p%i==0){
                break;
            }
        }    
            if(i==p){
                cout<<p<<" ";
                n--;
            }
             p++;
        
    }



    
    return 0;

}