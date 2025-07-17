#include<stdio.h>
int main(){
    
    int a[2][2];
    int arr[2][2];
    int sum[2][2];
    printf("Enter the element of array-1: \n");
    for(int i = 0 ; i<2 ; i++){
        for(int j = 0 ; j<2 ; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the element of array-2: \n");
    for(int i = 0 ; i<2 ; i++){
        for(int j = 0 ; j<2 ; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i = 0 ; i<2 ; i++){
        for(int j = 0 ; j<2 ; j++){
            sum[i][j] = a[i][j] + arr[i][j];
        }
    }

    printf("sum of array 1 and array 2:\n ");
    for(int i = 0 ; i<2 ; i++){
        for(int j = 0 ; j<2 ; j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;

}