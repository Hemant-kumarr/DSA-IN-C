#include<stdio.h>

int Arr[7][7];  // increased to 7 for 1-based indexing
int visited[7] = {0};
int min, mincost = 0;

void prims() {
    int ne = 1, a, b;

    // Replace 0 with large value for no edge
    for(int i = 1; i <= 6; i++) {
        for(int j = 1; j <= 6; j++) {
            if(Arr[i][j] == 0)
                Arr[i][j] = 999;
        }
    }

    visited[1] = 1;

    while(ne < 6) {
        min = 999;

        for(int i = 1; i <= 6; i++) {
            for(int j = 1; j <= 6; j++) {
                if(visited[i] == 1 && visited[j] == 0 && Arr[i][j] < min) {
                    min = Arr[i][j];
                    a = i;
                    b = j;
                }
            }
        }

        printf("\n Edge %d : (%d - %d) cost: %d", ne++, a, b, min);
        mincost += min;
        visited[b] = 1;
        Arr[a][b] = Arr[b][a] = 999;
    }

    printf("\n\n Minimun cost = %d\n", mincost);
}

int main() {
    printf("Enter the Weight of each Edge: \n");
    for(int i = 1; i <= 6; i++) {
        for(int j = 1; j <= 6; j++) {
            printf("Enter edge (%d , %d) Weight : ", i, j);
            scanf("%d", &Arr[i][j]);
        }
    }

    printf("\nAdjacency Matrix:\n");
    for(int i = 1; i <= 6; i++) {
        for(int j = 1; j <= 6; j++) {
            printf("%4d", Arr[i][j]);
        }
        printf("\n");
    }

    prims();

    return 0;
}
