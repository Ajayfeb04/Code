#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=13; i<50; i++){
        if(i%3==0){
            sum=sum+i;
        }

    }
    printf("%d",sum);
    return 0;
}

