// FEDCBA
// EDCBA
// DCBA
// CBA
// BA
// A
//  #include<stdio.h>
//  int main(){
//      int rows=6;
//      for(int i=rows-1; i>=0; i--){
//          for(char j= 'A'+ i; j>='A'; j--){
//              printf("%c",j);
//          }
//          printf("\n");
//      }
//      return 0;
//  }
//  A simple c program to compute sum of series 1/1!+1/2!+.....1/50!
//  #include <stdio.h>
//      double factorial(int n){
//          double fact=1;
//          for(int i=1; i<=n; i++){
//              fact*=i;
//          }
//          return fact;
//      }
//      int main(){
//          double sum =1;
//          for(int i=2; i<=50; i++){
//              sum+=1/factorial(i);
//          }
//          printf("Sum of the series up to the first 50 terms: %f\n",sum);
//          return 0;
//      }
// A
// BB
// CCC
// DDDD
// #include <stdio.h>
// int main()
// {
//     int k=65;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%c", k);
//         }
//          k++;
//         printf("\n");
//     }
//     return 0;
// }

//A
//AB
//ABC
//ABCD
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         int k=65;
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%c", k);
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
//A
//BC
//DEF

// #include <stdio.h>
// int main()
// {
//     int k=65;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%c", k);
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
