#include<stdio.h>
int main()
{
    int r;
    printf("enter rows:-");
    scanf("%d",&r);
   // printf("enter column:-");
   // scanf("%d",&c);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<r+1-i;j++)
        {
            printf("*");
        }
       printf("\n");
    }
    return 0;
}