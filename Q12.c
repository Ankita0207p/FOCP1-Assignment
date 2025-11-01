//Program to find the maximum and minimum scores in an array.
#include<stdio.h>
int main()
{
    int scores[]={85, 42, 96, 73, 58, 99, 61, 77, 88, 45};
    int n = sizeof(scores)/sizeof(scores[0]);
    int max_score = scores[0];
    int min_score = scores[0];
    int i;

    for(i=1; i<n; i++)
    {
        if(scores[i] > max_score)
        {
            max_score = scores[i];
        }
        if(scores[i] < min_score)
        {
            min_score = scores[i];
        }
    }

    printf("Maximum score in the array is: %d\n", max_score);
    printf("Minimum score in the array is: %d\n", min_score);

    return 0;
}