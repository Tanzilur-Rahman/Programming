#include<stdio.h>

int main()

{
    char i,j,ch;

    printf("Enter 'u' for uppercase and 'l' for lowercase : ");
    scanf("%c",&ch);


    if(ch=='l')
    {

    for(i='z';i>='a';i--)
    {
        printf("%c\n",i);
    }
    }

    else if(ch=='u')
    {

    for(j='Z';j>='A';j--)
    {
        printf("%c\n",j);
    }
    }
    return 0;
}
