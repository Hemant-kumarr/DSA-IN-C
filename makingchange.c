#include <stdio.h>
#define MAX 999

int min(int a, int b) {
    return (a < b) ? a : b;
}

void makingchange(int d[], int D, int nc) {
    int C[nc + 1][D + 1];

    for (int i = 0; i <= nc; i++) {
        for (int j = 0; j <= D; j++) {
            if (j == 0) {
                C[i][j] = 0; 
            } else if (i == 0) {
                C[i][j] = MAX; 
            } else if (d[i] > j) {
                C[i][j] = C[i - 1][j];  
            } else {
                C[i][j] = min(C[i - 1][j], 1 + C[i][j - d[i]]);
            }
        }
    }
        printf("\nMinimum coins required = %d\n", C[nc][D]);  
}

int main() {
    int d[10], nc, D;

    printf("Enter the number of coin types:\n");
    scanf("%d", &nc);

    for (int i = 1; i <= nc; i++) {
        printf("Enter the value of d[%d]: ", i);
        scanf("%d", &d[i]);
    }

    printf("Enter the amount you want to pay: ");
    scanf("%d", &D);

    makingchange(d, D, nc);

    return 0;
}
