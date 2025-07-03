#include<stdio.h>
void binarysearch(int arr[] , int n ){
    int l = 0 , h = n-1;
    int target;
    printf("Enter the element you want find: ");
    scanf("%d",&target);
    while(l<=h){
        int mid = (l+h)/2;
        if(target == arr[mid]){
            printf("Element find at index no. %d",mid);
            break;
        }
        else if(target > arr[mid]){
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }
    }
    if(l>h){
        printf("Element not found in array ");
    }
}
int main()
{
    int arr[50];
    int n;
    printf("Enter the number of elements you want in array(in shorted form): ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter the element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    binarysearch(arr, n);
    return 0;
}