#include<stdio.h>
int main()
{
    int i,n,s;
    printf("enter the length of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element in array:\n");
    for(i=0;i<n;i++){scanf(" %d",&arr[i]);}
    printf("enter the searching number:\n");
    scanf("%d",&s);
    for(i=0;i<n;i++)
{
        if(s==arr[i])
        {
            printf("the nuber is found at %d",i+1);
            break;
        }
    }
return 0;
}