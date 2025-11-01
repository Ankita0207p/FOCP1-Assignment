//Program to determine the quadrant in which a given coordinate point.
#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinates (x,y): ");
    scanf("%d %d",&x,&y);
    if(x>0 && y>0)
        printf("The point (%d,%d) lies in the First Quadrant.\n",x,y);
    else if(x<0 && y>0)
        printf("The point (%d,%d) lies in the Second Quadrant.\n",x,y);
    else if(x<0 && y<0)
        printf("The point (%d,%d) lies in the Third Quadrant.\n",x,y);
    else if(x>0 && y<0)
        printf("The point (%d,%d) lies in the Fourth Quadrant.\n",x,y);
    else if(x==0 && y==0)
        printf("The point (%d,%d) lies at the Origin.\n",x,y);
    else if(x==0)
        printf("The point (%d,%d) lies on the Y-axis.\n",x,y);
    else
        printf("The point (%d,%d) lies on the X-axis.\n",x,y);

    return 0;
}