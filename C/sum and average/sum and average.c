int main()
{
    int a,b,c,sum;
    float avg;

    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter third number :");
    scanf("%d",&c);

    sum=a+b;
    avg= (a+b)/2;

    printf("Sum = %d\n",sum);
    printf("Average = %0.3f",avg);

    return 0;
}
