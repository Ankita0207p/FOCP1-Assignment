//Program to count the number of prime numbers in a an array.
#include<stdio.h>
int main()
{
    int arr[]={10,15,23,42,7,5,66,13,29,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j,count=0,flag=0;

    for(i=0;i<n;i++)
    {   if(arr[i]<2)
        {
            flag=1; // Numbers less than 2 are not prime
        }
        else
        {
            for(j=2;j*j<=arr[i];j++)
            {
                if(arr[i]%j==0)
                {
                    flag=1; 
                    break;
                }
            }
        }
        if(flag==0)
        {count++;}
        flag=0;
    }

    printf("The number of prime numbers in the array is: %d\n",count);
    return 0;
}