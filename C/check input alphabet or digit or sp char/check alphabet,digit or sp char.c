#include<stdio.h>

int main()
{
    char x;

    printf("Enter character / digit / special character: ");

    scanf("%c",&x);

    if(x>='a'&& x<='z')
    {
        printf("It is alphabet");
    }
    else if(x>='A'&& x<='Z')
    {
        printf("It is alphabet");
    }
    else if(x>='0' && x<='9'){
        printf("It is number");
    }
    else{
        printf("Its special character");
    }


    return 0;
}
