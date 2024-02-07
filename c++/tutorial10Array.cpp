// Q-1 Print the all element of array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int array[]={1,2,3,4};
//     int size = sizeof(array)/sizeof (array[0]);
//     for(int idx=0; idx<size; idx++){
//         cout<<array[idx]<<endl;
//     }
    // For each loop
    // for(int ele : array){
    //     cout<<ele<<endl;
    // }
    // return 0;

// }

//General form
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;  //n-size
//     cin>>n;
//     int array[n];
//     for(int i =0; i<n; i++){      //taking input
//         cin>>array[i];

//     } 

//     for(int i= 0; i<n; i++){
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }

//Q-2 Taking input in array

// #include <iostream>
// using namespace std;
// int main()
// {
    // // int array[]={1,2,3,4,}; //off
    // char vowels[5];
    // for (int indx=0; indx<5; indx++){
    //     cin>>vowels[indx];
    // }
    //     for (int indx=0; indx<5; indx++){  off
    //     cout<<vowels[indx]<<endl;  //off
    // }   //off
    //for each loop  //off
   // for(char &element : vowels){
        //cout<<element<<endl;  //or cout<<vowels[indx]<<endl;
   // }
   // return 0;

//}

//Q-3 Calculate the sum of all the element in the given array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int array[]={3,4,10,11};
//     int sum = 0;
//     int size = sizeof(array)/sizeof(array[0]);
//     for(int i=0; i<size; i++){
//         sum+=array[i];

//     }
//     cout<<sum<<endl;
//     return 0;

// }

//Q-4 Find the maximum value out of all the element in the array 
// #include <iostream>
// using namespace std;
// int main()
// {
//     int array[]={3,7,18,9,11};
//     int max =array[0];
//     for(int i=1; i<5; i++){
//         if (array[i]>max){
//             max=array[i];
//         }
//     }
//     cout<<max<<endl;
//     return 0;
// }

//Q-5 Linear search 
// #include <iostream>
// using namespace std;
// int main()
// {
//     int array[]={3,9,18,9,11};
//     int key = 9;
//     int ans = -1;
//     for(int i=0; i<5; i++){
//         if(array[i]==key){
//             ans =i;
//         //   break;  
//         } 
//     }
//     cout<<ans<<endl;
//     return 0;
// }

//Q-6 Find max and min element in array by taking input from user
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    // int maxNo =INT_MIN; 
    int minNo = INT_MAX;
    for(int i=0; i<n; i++){
        // if(array[i]>maxNo){
        //     maxNo= array[i];
        // }
        if (array[i]<minNo) {
            minNo=array[i];
        }
    }
    // cout<<maxNo<<endl; 
    cout<<minNo<<endl;
    return 0;
}