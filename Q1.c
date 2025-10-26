//Finding if the number is amstrong number or not.
#include<stdio.h>
#include<math.h>
int main()
{
int n,sum=0,rem;
printf("Enter the number: ");
scanf("%d",&n);
int c=printf("%d",n),copy=n;
while(n>0)
{rem=n%10;
 sum+=ceil(pow(rem,c));
 n/=10;}
printf("\nsum=%d copy=%d",sum,copy);
if (sum==copy)
printf("\nIts an amstrong number. ");
else
printf("\nIts not an amstrong number");
return 0;
}