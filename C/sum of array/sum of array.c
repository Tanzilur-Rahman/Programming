#include<stdio.h>

int main()
{
    int i,n,sum=0;

    printf("enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("sum is: %d",sum);


    return 0;
}
