#include<stdio.h>
int main()
{
    int n,ld,sum=0;
    printf("enter a number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        ld=n%10;
        sum=sum+ld;
        n=n/10;

    }
    printf("the sum of number is %d :",sum);
    return 0;
}