// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size, int order) {
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (order == 1) { // Ascending order
                if (arr[j] > arr[j + 1]) {
                    swap(&arr[j], &arr[j + 1]);
                }
            } else if (order == 2) { // Descending order
                if (arr[j] < arr[j + 1]) {
                    swap(&arr[j], &arr[j + 1]);
                }
            }
        }
    }
}

int main() {
    int arr1[100], arr2[100], size1, size2, i, order;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the elements of the first array: ");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    printf("Enter the elements of the second array: ");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Enter the sorting order (1 for ascending, 2 for descending): ");
    scanf("%d", &order);

    bubbleSort(arr1, size1, order);
    bubbleSort(arr2, size2, order);

    printf("Sorted first array: ");
    for (i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nSorted second array: ");
    for (i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}

