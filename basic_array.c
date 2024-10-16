#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr);
    long long product = 1;

    for (int i = 0; i < size; i++) {
        product *= arr[i];
    }

    printf("The product of the array elements is: %lld\n", product);
    return 0;
}

