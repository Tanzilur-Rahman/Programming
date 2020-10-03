#include<stdio.h>

int main()
{
    int x,y,sum;
    int *pt1,*pt2;
    pt1=&x;
    pt2=&y;


    printf("enter two num:\n");
    scanf("%d %d",pt1,pt2);

    sum=*pt1+*pt2;
    printf("sum = %d",sum);



    return 0;
}
