#include<stdio.h>

int main()
{

    int start_point,end_point,i;

    printf("Enter start :\n");
    scanf("%d",&start_point);
    printf("Enter endpoint :\n");
    scanf("%d",&end_point);
    printf("Reverse between %d to %d\n",start_point,end_point);

    for(i=end_point;i>=start_point;i--)
    {
        printf("%d\n",i);
    }


    return 0;
}
