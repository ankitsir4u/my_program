// sum  of series :1-2+3-4+5-6+7-8
#include<stdio.h>
int main()
    {
        int n,i,sum=0;
        printf("enter the value of n:");
        scanf("%d",&n);
        for(i=1;i<n;i++)
        {
            if(i%2!=0) sum = sum+i;
            else sum = sum-i;

        }

    printf("%d",sum);
    return 0;
}