#include<stdio.h>

void linearsearch(int arr[], int n) {
    int target;
    int a = 0;
    printf("Enter the target element you want to search: ");
    scanf("%d", &target);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element found at index %d\n", i);
            a++;
        }
    }
    
    if (a == 0) {
        printf("Element not found in array\n");
    } else {
        printf("Count: %d\n", a);
    }
}

int main() {
    int arr[50];
    int n;
    printf("Enter the number of elements you want in array: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter the element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    linearsearch(arr, n);

    return 0;
}
