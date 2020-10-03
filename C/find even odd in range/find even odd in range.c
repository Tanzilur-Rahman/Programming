#include<stdio.h>

int main()
{

    int start_point,end_point,i;


    printf("Enter start point :\n");
    scanf("%d",&start_point);
    printf("Enter end point :\n");
    scanf("%d",&end_point);
    printf("Even:\n");
    for(i=start_point;i<=end_point;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }

    }

    printf("Odd:\n");
    for(i=start_point;i<=end_point;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }


    }



    return 0;
}

