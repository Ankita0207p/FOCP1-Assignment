//Program to find number of occurrences of the score “99” in an array
#include<stdio.h>
int main()
{
    int n, i, arr[]={10,20,30,40,50,60,70,80,99,90,99,100},count=0;
    n=sizeof(arr)/sizeof(arr[0]);
    for (i=0;i<n;i++)
    {
        if (arr[i]==99)
        {count++;
        printf("%dth student score is 99\n",i);}
    }
    if (count>0)
        printf("The number of occurrences of score 99 in the array is: %d\n",count);
    else
        printf("Score 99 not found in the array.\n");
    return 0;
}