#include<stdio.h>


int main()
{
    int num1,num2;
    printf("Enter 1st Number :\n");
    scanf("%d",&num1);
    printf("Enter 2nd Number :\n");
    scanf("%d",&num2);

    if(num1>num2)
    {
        printf("Max : %d\n",num1);
        printf("Min : %d\n",num2);
    }

    else if(num2>num1)
    {
        printf("Max : %d\n",num2);
        printf("Min : %d\n",num1);
    }

    else
    {
        printf("Both %d and %d are equal",num1,num2);
    }


    return 0;
}
