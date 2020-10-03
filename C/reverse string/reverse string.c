#include<stdio.h>
#include<string.h>

int main()
{
    char str[200];
    printf("enter a string: \n");
    gets(str);
    strrev(str);
    printf("Reverse: %s",str);


    return 0;
}
