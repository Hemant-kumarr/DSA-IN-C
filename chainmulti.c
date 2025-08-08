#include <stdio.h>
#include <limits.h>

void matrixChainOrder(int p[], int n) {
    int m[n][n]; // m[i][j] = min number of multiplications from Ai to Aj
    int i, j, k, L, q;

    // Cost is zero when multiplying one matrix
    for (i = 1; i < n; i++)
        m[i][i] = 0;

    // L is chain length
    for (L = 2; L < n; L++) {
        for (i = 1; i < n - L + 1; i++) {
            j = i + L - 1;
            m[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++) {
                q = m[i][k] + m[k+1][j] + p[i-1] * p[k] * p[j];
                if (q < m[i][j])
                    m[i][j] = q;
            }
        }
    }

    printf("Minimum number of multiplications is %d\n", m[1][n-1]);
}

int main() {
    // Example: matrices A1 (10x30), A2 (30x5), A3 (5x60)
    int arr[] = {10, 30, 5, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    matrixChainOrder(arr, size);
    return 0;
}
