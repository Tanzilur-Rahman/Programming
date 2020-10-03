#include<stdio.h>

int main()
{
    int num,reverse=0,last,i;

    printf("enter number: \n");
    scanf("%d",&num);

    while(num!=0)
    {   last=num%10;
        reverse=reverse*10+last;
        num/=10;
    }

    printf("reverse : %d",reverse);




    return 0;
}
