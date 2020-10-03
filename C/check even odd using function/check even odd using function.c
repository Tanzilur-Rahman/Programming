#include<stdio.h>

void com(int num)
{
    printf("enter a number:\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is even",num);
    }
    else{
        printf("%d is odd",num);
    }
}


int main()
{
    int num;
    com(num);

   return 0;
}
