#include<stdio.h>

int main()
{
    char ch;

    printf("Enter character : ");

    scanf("%c",&ch);

    if(ch>='a'&& ch<='z')
    {
        printf("It is lowercase letter");
    }
    else if(ch>='A'&& ch<='Z')
    {
        printf("It is uppercase letter");
    }
    else {
        printf("Please input valid letter");
    }


    return 0;
}

