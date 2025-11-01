//Subtract two integers without using the minus (-) operator
#include <stdio.h>

int main() 
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    while(b!=0)
    {
        int c = (~a) & b;  //finds borrow bits
        a= a^b;            //subtract bits without borrow
        b= c << 1;         //Apply borrow to next bit
    }
    printf("Difference: %d\n", a);
    return 0;
}