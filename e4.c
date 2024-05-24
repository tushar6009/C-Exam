#include <stdio.h>

int main() {
    int n, arr, i,ptr;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    ptr = &*arr[n];
    
    for (i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", *arr[i]);
    }
    
    printf("THE SQUARE OF ARRAY:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i] * arr[i]);
    }

}

