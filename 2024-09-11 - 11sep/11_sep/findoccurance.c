#include <stdio.h>
int main() {
    int arr[100], positions[100], size, i, j, x, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find its positions: ");
    scanf("%d", &x);

    for (i = 0; i < size; i++) {
        if (arr[i] == x) {
            positions[count] = i;
            count++;
        }
    }

    printf("Positions of %d in the array: ", x);
    for (i = 0; i < count; i++) {
        printf("%d ", positions[i]);
    }
    printf("\n");
    return 0;
}

