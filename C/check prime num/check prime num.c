#include<stdio.h>


int main()
{
    int num,i,count=0;
    printf("Enter a num:\n");
    scanf("%d",&num);
    if(num>1)
    {
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }

    if(count==0)
    {
        printf("%d is a prime num",num);
    }
    else{
         printf("%d is not a prime num",num);
    }
    }


    else{
        printf("%d is not a prime num",num);
    }


    return 0;
}
