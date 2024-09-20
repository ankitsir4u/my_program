#include<stdio.h>
int main()
{
    int n,c;
    printf("enter the rows:-");
    scanf("%d",&n);
    scanf("%d",&c);
    for(int i=1;i<=n;i++)
    {
        for( int j=1;j<=c;j++)
        {
            if(i==2 && j==2 || i==3 && j==2 || i==2 && j==3 || i==3 && j==3 || i==2 && j==4 || i==3 && j==4 || i==2 && j==5 || i==3 && j==5) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}