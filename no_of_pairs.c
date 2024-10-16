#include<stdio.h>
int main() {
    int arr[10]={2,3,2,5,6,3,12,15,7,8};
    int totalpairs=0;
    int x=14;
    for(int i=0;i<=9;i++) {
        for(int j=i+1;j<=9;j++) {
            if(arr[i]+arr[j]==x) {
                totalpairs++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d",totalpairs);
    return 0;
}