#include<stdio.h>

void com(int num1,int num2){
    printf("Enter 2 numbers:");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        printf("max: %d",num1);
        printf("min: %d",num2);
    }

    else if(num2>num1)
    {
        printf("max: %d\n",num1);
        printf("min: %d\n",num2);
    }
    else{
        printf("Both are equal");
    }
}




int main()
{

    int num1,num2;
    com(num1,num2);

    return 0;
}
