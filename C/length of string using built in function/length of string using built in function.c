#include<stdio.h>

int main()
{

    char txt[100];
    int ln;
    printf("enter a string : ");
    scanf("%[^\n]s",txt);
    ln=strlen(txt);

    printf("Length : %d",ln);


    return 0;
}
