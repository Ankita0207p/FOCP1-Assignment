//Program that allows to convert between Binary and Decimal systems based on user's choice
#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    printf("Choose conversion type:\n1. Decimal to Binary\n2.Binary to Decimal\nEnter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        int num;
        printf("\nEnter a Decimal number: ");
        scanf("%d", &num);

        long long binary = 0;
        int i = 1,n = num;

        while (n != 0) {
            int rem = n % 2;        
            binary += rem * i;      
            n /= 2;                   
            i *= 10;  
        }
         printf("Binary equivalent of %d is: %lld\n", num, binary);
    }


    else if (choice == 2) 
    {
        long long binary;
        printf("\nEnter a Binary number: ");
        scanf("%lld", &binary);

        long long n = binary;
        int power = 0,decimal=0;

        while (n != 0) {
            int rem = n % 10;            
            decimal += rem * pow(2, power); 
            n /= 10;                  
            power++;
        }

        printf("Decimal equivalent of %lld is: %d\n", binary, decimal);
    }


    else
    {
        printf("\nInvalid choice!");
    }


    return 0;
}