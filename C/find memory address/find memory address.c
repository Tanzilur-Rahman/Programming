#include<stdio.h>
#include<string.h>

int main()
{
    int num;
    char str[100];

    printf("enter a number:\n");
    scanf("%d",&num);
    printf("enter a string:\n");
    scanf("%s",str);

    printf("memory address of %d is %p \n",num,&num);
    printf("memory address of %s is %p \n",str,&str);

}
