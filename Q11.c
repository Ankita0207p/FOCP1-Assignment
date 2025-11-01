//Program to seperate even and odd elements of an array in two different arrays
#include<stdio.h>
int main()
{
    int arr[]={10,21,30,41,50,61,70,81,90,101},even[10],odd[10];
    int i,n,e_count=0,o_count=0;
    n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[e_count]=arr[i];
            e_count++;
        }
        else
        {
            odd[o_count]=arr[i];
            o_count++;
        }
    }
    printf("Even elements in the array are:\n");
    for(i=0;i<e_count;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\nOdd elements in the array are:\n");
    for(i=0;i<o_count;i++)
    {
        printf("%d ",odd[i]);
    }
    return 0;
}