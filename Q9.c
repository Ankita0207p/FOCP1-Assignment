//program to find the first occurrence of the score “99” in an array
#include<stdio.h>
int main()
{
    int n, i, arr[]={10,20,30,40,50,60,70,80,99,90,99,100},flag=0;
    n=sizeof(arr)/sizeof(arr[0]);
    for (i=0;i<n;i++)
    {
        if (arr[i]==99)
        {
            printf("The first occurrence of score 99 is at index: %d\n",i);
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("Score 99 not found in the array.\n");
}