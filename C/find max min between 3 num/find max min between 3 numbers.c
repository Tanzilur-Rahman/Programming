#include<stdio.h>


int main()
{
    int num1,num2,num3;

    printf("Enter num1: \n");
    scanf("%d",&num1);
    printf("Enter num2: \n");
    scanf("%d",&num2);
    printf("Enter num3: \n");
    scanf("%d",&num3);

    if((num1>num2) && (num1>num3))
    {
        printf("Max : %d\n",num1);

        if(num2<num3)
        {
            printf("Min : %d\n",num2);
        }
        else if(num3<num2){
            printf("Min : %d\n",num3);
        }
        else{
            printf("Num 2 & Num 3 are equal");
        }
    }
    else if((num2>num1) && (num2>num3))
    {
        printf("Max : %d\n",num2);

        if(num1<num3)
        {
            printf("Min : %d\n",num1);
        }
        else if(num3<num1){
            printf("Min : %d\n",num3);
        }
        else{
            printf("Num 1 & Num 3 are equal");
        }
    }
    else if((num3>num1) && (num3>num2))
    {
        printf("Max : %d\n",num3);

        if(num1<num2)
        {
            printf("Min : %d\n",num1);
        }
        else if(num2<num1){
            printf("Min : %d\n",num2);
        }
        else{
            printf("Num 1 & Num 2 are equal");
        }
    }

    else if((num1==num2)&&(num3==num2))
    {
        printf("All numbers are equal");
    }
    else{
        printf("Oh..! Max number has repetition!");
    }





    return 0;
}
