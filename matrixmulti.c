#include<stdio.h>
int main(){
    printf("Matrix Multiplication\n");
    int m1[2][2];
    int m2[2][2];
    int res[2][2];
    printf("Enter the element of matrix-1\n");
    for(int i = 0 ; i<2 ; i++){
        for(int j = 0 ; j<2 ; j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter the element of matrix-2\n");
    for(int i = 0 ; i<2 ; i++){
        for(int j = 0 ; j<2 ; j++){
            scanf("%d",&m2[i][j]);
        }
    }
    for(int i = 0 ; i<2 ; i++){
        for(int j = 0 ; j<2 ; j++){
            res[i][j] = 0;
            for(int k = 0 ; k<2 ; k++){
                res[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
    printf("Result : \n");
    for(int i = 0 ; i<2 ; i++){
        for(int j = 0 ; j<2 ; j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }

    return 0;
}