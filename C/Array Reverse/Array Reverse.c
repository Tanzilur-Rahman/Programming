#include<stdio.h>

int main()
{
    int i,n;

    printf("enter array size:\n");
    scanf("%d",&n);

    int arr[n];

    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reverse the array:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
