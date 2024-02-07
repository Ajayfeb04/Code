//Q-1 write a program to print the day based on the day number 

// #include <iostream>
// using namespace std;
// int main()
// {
//     int number;
//     cout<<"Day number"<<endl;
//     cin>>number;
//     switch(number){
//         case 1:
//         cout<<"Monday"<<endl;
//         break;
//         case 2:
//         cout<<"Tuesday"<<endl;
//         break;
//         case 3:
//         cout<<"Wednesday"<<endl;
//         break;
//         case 4:
//         cout<<"Thursday"<<endl;
//         break;
//         case 5:
//         cout<<"Friday"<<endl;
//         break;
//         case 6:
//         cout<<"Saturday"<<endl;
//         break;
//         case 7:
//         cout<<"Sunday"<<endl;
//         break;
//         default :
//         cout<<"default case";

            
        
//     }
//     return 0;

// }

//Q-2 print consonant and vowels

#include <iostream>

using namespace std;

int main() {
    int n, num, sum = 0;
    cout << "Enter the number of integers: ";
    cin >> n;
    cout << "Enter the integers: ";
    int i = 0;
    do {
        cin >> num;
        sum += num;
        i++;
    } while (i < n);
    cout << "The sum is: " << sum << endl;
    return 0;
}
