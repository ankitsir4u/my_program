#include<stdio.h>
int main()
{
    int r,c;
    printf("enter row:\n");
    scanf("%d",&r);
    printf("enter column:\n");
    scanf("%d",&c);
    for(int i=1;i<=r;i++)// it is for rows
    {
        for (int j=1;j<=i;j++) //this is responsible for printing
        {
            printf("*");
        }

    
printf("\n");
        }
return 0;
}