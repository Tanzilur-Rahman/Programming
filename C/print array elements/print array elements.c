#include<stdio.h>

int main()
{
    int n,i;
    printf("enter array size:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("array elements :\n");
    for(i=0;i<n;i++)
    {
        printf("%d , ", arr[i]);
    }

    return 0;
}
