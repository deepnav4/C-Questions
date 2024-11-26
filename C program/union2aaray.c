#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], arr3[MAX_SIZE];
    int size1, size2, k = 0;

    printf("Enter the size of first array: ");
    scanf("%d", &size1);
    printf("Enter %d elements for the first array:\n", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &size2);
    printf("Enter %d elements for the second array:\n", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < size1; i++) {
        arr3[k++] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (arr2[i] == arr3[j]) {
                found = 1;
                break;
            }
        }
        if (!found) arr3[k++] = arr2[i];
    }
    printf("Union: ");
    for (int m = 0; m < k; m++) { 
        printf("%d ", arr3[m]);
    }
    
    printf("\n");

    return 0;
}
