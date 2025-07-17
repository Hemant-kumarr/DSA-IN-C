#include<stdio.h>
int main(){
    
    int a[2][2];
    int arr[2][2];
    int sum[2][2];
    int sub[2][2];
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
            sub[i][j] = a[i][j] - arr[i][j];
        }
    }

    printf("sum of array 1 and array 2:\n");
    for(int i = 0 ; i<2 ; i++){
        for(int j = 0 ; j<2 ; j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

      printf("substraction of array 1 and array 2:\n");
    for(int i = 0 ; i<2 ; i++){
        for(int j = 0 ; j<2 ; j++){
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }

    // int array[10] = {0};
    // for(int i = 0 ; i<10 ; i++){
    //     printf("element %d : = %d\n" ,i , array[i] );
    // }

    // int arrayyy[10];
    // printf("Enter the element of the array : \n");
    // for(int i = 0 ; i<10 ; i++){
    //    scanf("%d" , &arrayyy[i]);
    // }
    // int sum = 0;
    // printf("Even element in the array : \n");
    // for(int i = 0 ; i<10 ; i++){
    //     // if(arrayyy[i]%2==0)
    //      printf("element %d : = %d\n" ,i , arrayyy[i] );
    //      sum = sum+arrayyy[i];
    // }
    // printf("Sum of all array element :\n%d",sum);


    return 0;

}