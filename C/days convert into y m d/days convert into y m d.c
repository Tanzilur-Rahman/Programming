#include <stdio.h>

int main()
{
    int d,y,m,nd;
    printf("Enter number of days : ");
    scanf("%d",&d);
    y=d/365;
    d=d%365;
    m=d/30;
    nd=d%30;
    printf("\n%d years, %d months, %d days\n",y,m,nd);
    return 0;
}
