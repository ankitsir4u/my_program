#include<stdio.h>
int main()
{
    int a,b;
    printf("enter base:\n");
scanf("%d",&a);
printf("enter power:\n");
scanf("%d",&b);
int power = 1;
for(int i=1;i<=b;i++)
{
    power=power*a;
}
printf(" %d power %d is equal to :%d",a,b,power);
return 0;
}