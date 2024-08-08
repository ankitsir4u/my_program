#include<stdio.h>
int main()
{
    int  n,sum=0;
    printf("enter number:-");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++)
    {
        sum=sum+a;
        a++;

    }
    printf("%d",sum);
    return 0;
} 