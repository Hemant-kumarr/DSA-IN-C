#include <stdio.h>

// Function to sort by profit/weight ratio using Bubble Sort
void bubbleSort(float ratio[], int n, float profit[], float weight[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ratio[j] < ratio[j + 1]) {
                // Swap ratio
                float temp = ratio[j];
                ratio[j] = ratio[j + 1];
                ratio[j + 1] = temp;

                // Swap profit
                temp = profit[j];
                profit[j] = profit[j + 1];
                profit[j + 1] = temp;

                // Swap weight
                temp = weight[j];
                weight[j] = weight[j + 1];
                weight[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    float W = 15.0;

    printf("Enter the number of objects: ");
    scanf("%d", &n);

    float profit[n], weight[n], ratio[n];
    for (int i = 0; i < n; i++) {
        printf("Enter profit of object %d: ", i + 1);
        scanf("%f", &profit[i]);

        printf("Enter weight of object %d: ", i + 1);
        scanf("%f", &weight[i]);

        ratio[i] = profit[i] / weight[i];
    }

    // Sort by profit/weight ratio
    bubbleSort(ratio, n, profit, weight);

    float x[n]; // Fraction of items included
    for (int i = 0; i < n; i++) {
        x[i] = 0.0;
    }

    float totalProfit = 0.0;
    float rc = W; // Remaining capacity

    for (int i = 0; i < n; i++) {
        if (weight[i] <= rc) {
            x[i] = 1.0;
            totalProfit += profit[i];
            rc -= weight[i];
        } else {
            x[i] = rc / weight[i]; // Fraction of the item
            totalProfit += profit[i] * x[i];
            rc = 0;
            break; // Knapsack is full
        }
    }

    // Output
    printf("\nSelected items (1 for full, 0.x for fraction, 0 for not):\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d: %.2f\n", i + 1, x[i]);
    }

    printf("Total profit: %.2f\n", totalProfit);
    printf("Remaining capacity: %.2f\n", rc);

    return 0;
}
