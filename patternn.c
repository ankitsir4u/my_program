/*
   **** ****
   ***   ***
   **     **
   *       * 
*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter rows:-");
    scanf("%d",&n);
    int ns=n;
    int nt=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=ns;j++)
        {
            printf("*");
        }
        for(int k=1;k<=nt;k++)
        {
            printf(" ");
        }
            for(int j=1;j<=ns;j++)
            {
                printf("*");

            }
            ns--;
            nt+=2;
            printf("\n");

        }
        return 0;
    }
