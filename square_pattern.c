#include<stdio.h>
int main()
{
    int r,c;
    printf("enter row:\n");
    scanf("%d",&r);
    printf("enter column:\n");
    scanf("%d",&c);
    for(int i=1;i<=r;i++)// it is for row line
    {
        for (int j=1;j<=c;j++) //this is responsible for printing
        {
            printf("%d",i);
        }

    
printf("\n");
        }
return 0;
}