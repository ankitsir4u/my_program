#include<stdio.h>
int main()
{
    int n;
    printf("enter no of rows:-");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==2 || i==2) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}