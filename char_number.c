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
                     int a=1;
            int d=a+64;
            char ch=(char)d;
   if(i==1 || i==3 ||i==5) printf("%d",j);
            
            else
            {
                printf("%d",ch);
             a++;

    }
    printf("\n");
        }
    return 0;
}
}