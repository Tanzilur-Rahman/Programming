#include<stdio.h>
#include<string.h>


int main()
{
    char str[200];
    printf("enter a string in uppercase: \n");
    scanf("%[^\n]s",str);

    strlwr(str);
    printf("String in lowercase:\n %s",str);


    return 0;
}
