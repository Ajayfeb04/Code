//Q-1 Rotate the given array 'a' by k steps where k is non negative note k can be greater than n as well where n is the size of array 'a'.
 
// #include <iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int a;
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     int k=7;
//     k=k%v.size();
//     reverse(v.begin(),v.end());
//     reverse(v.begin(),v.begin()+k);
//     reverse(v.begin()+k,v.end());
//     for(int a:v){
//         cout<<a<<" ";
//     }
//     cout<<endl;


//     return 0;
// }
//take input from user and print it
 #include<iostream>
#include<vector>
using namespace std;
int main()
{
    // int n,i,element;
    int i,n;
    cin>>n;
    vector<int>v(n);
    // for(i=0; i<n; i++){
    //     cin>>element;
    //     v.push_back(element);
    // }
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    for(i=0; i<n; i++){
    cout<<v[i]<<" ";
    }
    
    return 0;
}