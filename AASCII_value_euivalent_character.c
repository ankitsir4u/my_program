#include<stdio.h>
int main()
{
    int x=65;
    for(int i=65;i<=90;i++)
    {
        char ch =(char)i;
        printf("%c->",ch);
        printf("%d\n",i);
    }
    return 0;
}