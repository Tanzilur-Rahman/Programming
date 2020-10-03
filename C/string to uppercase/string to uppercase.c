#include<stdio.h>
#include<string.h>

int main()
{
    char txt[100];

    printf("enter a string in lowercase: ");
    scanf("%[^\n]s",txt);

    strupr(txt);
    printf("String in Uppercase : %s",txt);

    return 0;
}
