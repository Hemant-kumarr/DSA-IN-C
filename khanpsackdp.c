#include<stdio.h>
int max(int a,int b)
{
    return(a>b)?a:b;
}
void binaryKnapsack(int W, int wt[], int val[], int n) {
    int C[n+1][W+1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                C[i][w] = 0;
            else if (wt[i] <= w)
                C[i][w] = max(val[i] + C[i-1][w-wt[i]], C[i-1][w]);
            else
                C[i][w] = C[i-1][w];
        }
    }
    printf("Maximum profit in knapsack = %d\n", C[n][W]);
    printf("Items included in knapsack:\n");
    int res = C[n][W];
    int w = W;
    for (int i = n; i > 0 && res > 0; i--) {
        if (res != C[i-1][w]) {
            printf("Item %d with weight %d and profit %d\n", i, wt[i], val[i]);
            res -= val[i];
            w -= wt[i];
        }
    }
}
int main() {
    int W,n;
    int weight[10] = {0};
    int profit[10] = {0};
    printf("Enter the number of items: ");  
    scanf("%d", &n);
    printf("Enter the maximum weight of knapsack: ");
    scanf("%d", &W);
    
    for (int i = 1; i<=n ; i++) {
        printf("Enter the value of weight item %d: \n",i);
        scanf("%d",&weight[i]);
        printf("Enter the value of profit item %d: \n",i);
        scanf("%d",&profit[i]);
    }
    binaryKnapsack(W, weight, profit, n);

    return 0;
}

