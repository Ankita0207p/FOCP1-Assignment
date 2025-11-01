//C program to swap two numbers using four different methods
#include<stdio.h>
int main()
{
    int x, y, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    //Method 1: Using Third Variable
    temp=x;
    x=y;
    y=temp;
    printf("After Swapping using third variable: x=%d, y=%d\n", x, y);
    
    
    //Method 2: Using Operators
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swapping again using operators: x=%d, y=%d\n", x, y);
    

    //Method 3: Using bitwise XOR Operator
    x=x^y;
    y=x^y;
    x=x^y;
    printf("After swapping again using bitwise XOR operator: x=%d, y=%d\n", x, y);

    //Method 4: Using Pointers
    int *p1=&x;
    int *p2=&y;
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("After swapping again using pointers: x=%d, y=%d\n", x, y);

    return 0;
}