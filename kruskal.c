#include<stdio.h>
int parent[10];

// Function to find parent
int find(int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}
// Function to do union of two subsets
void unionSet(int i, int j) {
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}
void kruskal(int cost[10][10], int num) {
    int i, j, a, b, u, v, ne = 1, min, mincost = 0;
    // Initialize parent array
    for (i = 1; i <= num; i++) {
        parent[i] = i;
    }
    printf("\nEdges in Minimum Spanning Tree are:\n");
    while (ne < num) {
        for (i = 1, min = 999; i <= num; i++) {
            for (j = 1; j <= num; j++) {
                if (cost[i][j] < min) {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }
        u = find(u);
        v = find(v);
        if (u != v) {
            printf("\n Edge %d: (%d - %d) cost: %d", ne++, a, b, min);
            mincost += min;
            unionSet(u, v);
        }
        // Mark edge as used
        cost[a][b] = cost[b][a] = 999;
    }
    printf("\n\nMinimum cost = %d", mincost);
}
int main() {
    int num, i, j, cost[10][10];
    printf("\n\nEnter the number of nodes: ");
    scanf("%d", &num);
    printf("\nEnter the cost adjacency matrix:\n\n");
    for (i = 1; i <= num; i++) {
        for (j = 1; j <= num; j++) {
            printf("Value of cost[%d][%d] : ", i, j);
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = 999;  // No edge
        }
    }
    printf("\nThe cost adjacency matrix is:\n\n");
    for (i = 1; i <= num; i++) {
        for (j = 1; j <= num; j++) {
            printf("%d\t", cost[i][j]);
        }
        printf("\n");
    }
    kruskal(cost, num);
    
    return 0;
}
