#include<stdio.h>
int main()
{
    int n,ld,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        if(n%2==0)
        {
            ld=n%10;
            sum=sum+ld;
            n=n/10;
      }
    }
    printf("sum  of all even digit is:%d",sum);
    return 0;




}