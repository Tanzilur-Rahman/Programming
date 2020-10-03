#include<stdio.h>

int main()
{
    int n,i,min,max;

    printf("enter array size: ");
    scanf("%d",&n);

    int arr[n];

    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    max=arr[0];
    min=arr[0];

    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

        if(arr[i]<min)
        {
            min=arr[i];
        }

    }

    printf("min= %d\n",min);
    printf("max= %d",max);

    return 0;
}
