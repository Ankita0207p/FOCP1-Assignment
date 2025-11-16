#include <stdio.h>

int main() {
    int arr[100], n, pos, val;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) 
    scanf("%d", &arr[i]);

    printf("Original array: ");
    for(int i = 0; i < n; i++) 
    printf("%d ", arr[i]);

    printf("\nEnter value to insert: ");
    scanf("%d", &val);

    printf("Enter position (0 = front, %d = end): ", n);
    scanf("%d", &pos);

    for(int i = n; i > pos; i--) arr[i] = arr[i-1]; 
    arr[pos] = val;
    n++;

    printf("Array after insertion: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}