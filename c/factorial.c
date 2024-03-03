// #include<stdio.h>
// int main()
// {
//     int n;
//     int factorial = 1;
//     printf("Enter the number for finding factorial: ");
//     scanf("%d", &n);
//     for(int i =1; i<=n; i++){
//       factorial = factorial*i;
//     }
//     printf("%d", factorial);
    
// }


//Recursive way;

#include<stdio.h>
int factorial(int num){
    if(num==1){
        return 1;
    }
    int ans = num*factorial(num-1);
    return ans;
}
int main(){
    int n;
    printf("Enter the number for finding factorial: ");
    scanf("%d", &n);
    int result = factorial(n);
    printf("%d", result);
    // printf("%d", factorial(n));
    return 0;
}