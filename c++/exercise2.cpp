// Q-1 Write a program to check whether two number(by user) are equal or not (0 for not equal 1 for equal)

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the first number\n";
    cin >> x;
    cout << "Enter the second number\n";
    cin >> y;
    if(x==y){
        cout<<1<<endl;
    } else{
        cout<<0<<endl;
    }
    // cout << (x == y) ? 1 : 0; //(using ternary operator )

    return 0;
}

//Q2 Write a program to take the value of two variable a and b from the keyboard and then check if both the condition 'a<50'and 'a<b' are true

// #include <iostream> 
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter the first number";
//     cin>>a;
//     cout<<"Enter the second number";
//     cin>>b;
//     cout<<((a<50) && (a<b))? 1:0;
//     return 0;

// }

//Q3 There are 45 pupils in the class 25 of whom are boys write a program to find how many girls received grades "A"
//if 17 boys made up 80% of the student that received grades "A" 

// #include <iostream>
// using namespace std;
// int main(){
//     int total, boys, girls;
//     boys = 17;
//     total = (80*45)/100;
//     girls = total-boys;
//     cout<<" Number of girls getting grade A "<<girls<<endl;
//     return 0;

// }

//Q-5 write a program to calculate the sum of the first and the second last digit of a 5 digit number

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,m;
//     cout<<"Enter the value of n";
//     cin>>n;
//     m=n%10;
//     while (n>10)
//     {
//         n=n/10;
//     }
//     int sum=m+n;
//     cout<<sum;
//     return 0;
    
// }

                                // OR
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, first, second, third,fourth, fifth, sum;
//     n=12345;
//     fifth = n%10;
//     n=n/10;
//     fourth=n%10;
//     n=n/10;
//     third=n%10;
//     n=n/10;
//     second=n%10;
//     n=n/10;
//     first=n%10;
//     n=n/10;
//     sum=first+fourth;
//     cout<<"sum of first and fourth digit ia "<<sum;
    


// }


//Q5 write a program to calculate the sum of digits of a 3 digit number or general form of this question

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, first, second, third , sum;
//     cout<<"Enter the Number"<<endl;
//     cin>>n;
//     third = n%10;
//     n=n/10;
//     second=n%10;
//     n=n/10;
//     first=n%10;
//     n=n/10;
//     sum=first +second+third;
//     cout<<"sum of three digits is "<<sum;
//     return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int n,first, last ,m, sum; 
//     cin>>n;
//     int digits=0;
    
//     while(n>0){
//         digits++;
//         n = n/10;
    
//     }
//     cout<<digits<<endl;
//     digits == m;
//     first = n/pow(10,m-1);
//     last = n%10;
//     sum = first + last;
//     cout<<sum<<endl;
//     return 0;
    
// }

