#include<stdio.h>
int fibbo (int n) {
    if(n==2 ||n==1) return 1;
    return fibbo(n-1)+fibbo(n-2);
     

}
int main() {
    int n;
    printf("enter number");
    scanf("%d",&n);
    printf("%d",fibbo(n) );
}