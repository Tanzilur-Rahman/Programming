#include<stdio.h>


int main()

{
    int num,i=0;
    printf("enter number: ");

    scanf("%d",&num);
    while(num>0)
    {
      num/=10;
      i++;
    }



    printf("Total Digits are %d; ",i);


    return 0;
}
