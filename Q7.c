//Program to print a binary pyramid pattern.
#include <stdio.h>
int main()
{
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        for (j = i; j < n; j++)  //for centre
        {printf(" ");}

        for (j = 1; j <= i; j++)     //left pattern
        {printf("%d", (j + 1) % 2);}

        printf(" ");       //single space in between

        for (j = 1; j <= i; j++)     //right pattern
        {printf("%d", (j + 1) % 2);}

        printf("\n");
    }
    
    return 0;
}