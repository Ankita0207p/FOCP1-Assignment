//program to identify and print duplicate elements in an array
#include <stdio.h>

int main() 
{
    int n, i, j, count;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    if (n <= 0) 
    {
        printf("Invalid input. Array size must be positive.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) 
    {scanf("%d", &arr[i]);}

    int flag = 0;  
    printf("Duplicate elements are: ");
    for (i = 0; i < n; i++) 
    {
        int count = 1;
        if (arr[i] == -1)
            continue;
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {count++;
            arr[j] = -1; }
        }
        if (count > 1) 
        {
            printf("%d ", arr[i]);
            flag = 1;
        }
    }

    if (flag==0)
        printf("-1");

    printf("\n");

    return 0;
}