#include<stdio.h>

int main()
{
    int i,n,pos;

    printf("enter array size:\n");
    scanf("%d",&n);

    int arr[n];

    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter position to delete:\n");
    scanf("%d",&pos);

    if(pos>n||pos<0)
    {
        printf("Invalid position");
    }
    else{
        for(i=pos-1;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
    }

    printf("array after delete element:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\ ",arr[i]);
    }
    return 0;
}
