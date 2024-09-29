#include<stdio.h>
int power(int a,int b) {
    if(b==0) return 1;
    int p= a*power(a,b-1);
    return p;

}
int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
   int p= power(a,b);
    printf("%d raised to the %d is %d",a,b,p);
}