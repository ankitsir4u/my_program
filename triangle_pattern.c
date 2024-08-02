#include<stdio.h>
int main()
{
    int r,c;
    printf("enter rows:\n");
    scanf("%d",&r);
    printf("enter column:\n");
    scanf("%d",&c);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}