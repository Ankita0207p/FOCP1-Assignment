//Finding HCF of two numbers using Euclidean Algorithm
#include<stdio.h>
 int main()
{
    printf("THIS CODE IS TO FIND THE HCF OF TWO NUMBERS\n ENTER 1st NUMBER:");
    int num1,num2,i,hcf;
    scanf("%d",&num1);
    printf("ENTER 2nd NUMBER:");
    scanf("%d",&num2);
    for(i=1;i<=num1&&i<=num2;i++)
    {
        if(num1%i==0&&num2%i==0)
        {
            hcf =i;
        }
    }
    printf("the hcf of %d and %d is %d",num1,num2,hcf);
return 0;
}