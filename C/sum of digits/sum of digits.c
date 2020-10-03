#include<stdio.h>

int main()
{
    int num,sum=0,last;

    printf("Enter number: \n");
    scanf("%d",&num);

    while(num>0)
    {
        last=num%10;
        sum=sum+last;
        num=num/10;
    }
    printf("Sum of digits: %d",sum);


    return 0;
}
