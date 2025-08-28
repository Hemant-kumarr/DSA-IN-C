#include<stdio.h>
int main(){
    int cost[20][20];
    int n;
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=n ; j++){
            prinf("Enter the Cost of (%d,%d): ",i,j);
            scanf("%d",&cost[i][j]);
        }
    }
}