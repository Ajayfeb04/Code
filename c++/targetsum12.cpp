// Q-1 Find the unique number in a array where all the element are being repeated twice with one value being unique.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j;
//     int array[]={2,3,1,3,2,4,1};
//     int size=7;
//     for(int i=0; i<size; i++){
//         for(int j=i+1; j<size; j++){
//             if(array[i]==array[j]){
//                 array[i]=array[j]=-1;
//             }
//         }
//     }
//     for(int i=0; i<size; i++){
//         if(array[i]>0){
//             cout<<array[i]<<endl;
//         }
//         // cout<<array[i];
//     }

//     return 0;
// }
// Q2 Find the second largest element in the given array.
// #include <iostream>
// #include <climits>
// using namespace std;

// int largestElementIndex = (int array[], int size)
// {
//     int max = INT_MIN;
//     int maxIndex = -1;
//     for (int i = 0; i < size; i++)
//     {
//         if (array[i] > max)
//         {
//             max = array[i];
//             maxIndex = i;
//         }
//     }
//     return maxIndex;
// }
// int main()
// {
//     int array[] = {2, 3, 5, , 7, 6, 1};
//     int size=sizeof(array)/sizeof(array[0]);
//     int index_of_largest = largestElementIndex(array, 6);
//     array[index_of_largest] = -1;
//     cout << array[index_of_largest] << endl;
//     int index_of_second_largest = largestElementIndex(array, 6);
//     cout << array[index_of_second_largest] << endl;
//     cout << array[index_of_second_largest] << endl;
//     return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int n=6;
//     int i;
//     int array[]={2,3,5,7,6,1};
//     int max=INT_MIN;
//     int secondMax=INT_MIN;
//     for(i=0; i<n; i++){
//         if(array[i]>max){
//             max=array[i];
//         }
//     }
//     for(i=0; i<n; i++){
//         if(array[i]!=max && secondMax<array[i]){
//             secondMax=array[i];
//         }
//     }
//     cout<<secondMax;
//     return 0;
// }
//Q- Given Q queries check if the given number is present in the array or not 
//note value of the all element in the array is less than 10 to the power 5
#include <iostream>
using namespace std;
int main()
{
    
    return 0; 
}