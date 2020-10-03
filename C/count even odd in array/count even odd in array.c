#include<stdio.h>

int main()
{
    int i,n;
    int even=0,odd=0;

    printf("enter array size: ");
    scanf("%d",&n);

    int arr[n];

    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }

    printf("even : %d\n",even);
    printf("odd : %d",odd);

    return 0;
}
