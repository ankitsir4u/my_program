#include<stdio.h>
int main() {
    int arr[5]={3,5,21,45,67};
    int x;
    printf("enter the number you want search\n");
    scanf("%d",&x);

    for(int i=0;i<=4;i++) {
        if(arr[i]==x) {
            printf("the number %d is found at %d position",x,i+1);
            break;
        }
    }


return 0;
}
