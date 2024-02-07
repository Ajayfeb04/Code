// Q-1 Convert binary number to decimal

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, rem;
    cin>>n;
    int ans = 0;
    int i = 0;

    while (n>0)
    {
        int rem = n%10;
        ans = ans+rem*pow(2,i);
        n=n/10;
        i++;
    }
    cout<<"Decimal Number is = "<<ans<<endl;
    return 0;
}

                            //   OR
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans = 0;
    int power = 1;
    while(n>0){
        int lastdigit = n%10;
        ans = ans + lastdigit*power;
        n = n/10;
        power=power*2;

    }
    cout<<ans<<endl;
    return 0;
}

// Q- Convert decimal number to binary
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int ans = 0;
    while (n > 0)
    {
        int bit = n & 1;
        ans = ans + (bit * pow(10, i));
        n = n >> 1;
        i++;
    }
    cout << ans << endl;
    return 0;
}

                            // OR
#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the decimal number "<<endl;
    cin>>n;
    int power = 1;
    int ans = 0;
    while(n>0){
        int paritydigit = n%2;
        ans= ans + paritydigit*power;
        n = n/2;
        power=power*10;
    }
    cout<<ans<<endl;
    return 0;
}
// wrong
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int n; 
//     cout<<"Enter the decimal number "<<endl;
//     cin>>n;
//     int i = 0;
//     int ans = 0;
//     while(n>0){
//         int paritydigit = n%2;
//         ans= ans + paritydigit*pow(10,i);
//         n = n/2;
//         i++;
        
//     }
//     cout<<ans<<endl;
//     return 0;
// }