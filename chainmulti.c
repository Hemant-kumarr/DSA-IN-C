#include <stdio.h>
#define MAX 9999999

// Matrix Chain Multiplication using DP
int matrixChainOrder(int p[], int n) {
    int m[n][n];   // DP table
    int i, j, k, L, q;

    // diagonal elements ko 0 karna (single matrix cost = 0)
    for (i = 1; i < n; i++) {
        for (j = 1; j < n; j++) {
            if (i == j)
                m[i][j] = 0;
        }
    }

    // L = chain length
    for (L = 2; L < n; L++) {
        for (i = 1; i < n - L + 1; i++) {
            j = i + L - 1;
            m[i][j] = MAX;   // initialize with big value
            for (k = i; k <= j - 1; k++) {
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j])
                    m[i][j] = q;
            }
        }
    }

    return m[1][n - 1];
}

int main() {
    int n, i;
    printf("Enter number of matrices: ");
    scanf("%d", &n);

    int p[n + 1];
    printf("Enter dimensions array (size %d):\n", n + 1);
    for (i = 0; i <= n; i++) {
        scanf("%d", &p[i]);
    }

    int result = matrixChainOrder(p, n + 1);
    printf("Minimum number of multiplications is: %d\n", result);

    return 0;
}
