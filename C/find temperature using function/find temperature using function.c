#include<stdio.h>

void temperature(int temp)
{
    printf("enter temperature in celsious:\n");
    scanf("%d",&temp);

    int farenheit=(temp * 9/5) + 32;
    int kalvin=temp + 273.15;
    printf("Farenheit: %d\n",farenheit);
    printf("kalvin: %d",kalvin);
}


int main()
{
    int temp;
    temperature(temp);

    return 0;
}
