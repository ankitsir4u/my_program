#include<stdio.h>
int main()
{
    int n;
    printf("enter rows:-");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
            
        }
        printf("\n");

        int a=1;
        for(int k=1;k<=i+1;k++){
            int d=a+64;
            char ch=(char)d;

            printf("%c",ch);
            a++;
        }
        printf("\n");

    }
    return 0;
}