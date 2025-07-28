#include <stdio.h>

// Bubble Sort
void bubbleSort(int arr[], int n) {
    int temp;
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Selection Sort
void selectionSort(int arr[], int n) {
    int min_idx, temp;
    for(int i = 0; i < n-1; i++) {
        min_idx = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[min_idx])
                min_idx = j;
        }
        // Swap
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

// Insertion Sort
void insertionSort(int arr[], int n) {
    int key, j;
    for(int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements greater than key
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

// Function to print array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int arr[100], n, choice;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask user for sorting choice
    printf("\nChoose Sorting Algorithm:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Perform chosen sorting algorithm
    switch(choice) {
        case 1:
            bubbleSort(arr, n);
            break;
        case 2:
            selectionSort(arr, n);
            break;
        case 3:
            insertionSort(arr, n);
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    // Output sorted array
    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}
