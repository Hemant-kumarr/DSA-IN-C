#include <stdio.h>
void binarysearch(int arr[], int l, int h, int target)
{

    if (l > h)
    {
        printf("Element not found in array ");
    }
    int mid = (l + h) / 2;
    if (target == arr[mid])
    {
        printf("Element find at index no. %d", mid);
        // return binarysearch(arr , l , h , target);
        return;
    }
    else if (target > arr[mid])
    {
        binarysearch(arr, mid + 1, h, target);
    }
    else
    {
        binarysearch(arr, l, mid - 1, target);
    }
}

int main()
{
    int arr[50];
    int n;
    printf("Enter the number of elements you want in array(in shorted form): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the element you want find: ");
    scanf("%d", &target);
    binarysearch(arr, 0, n - 1, target);
    return 0;
}