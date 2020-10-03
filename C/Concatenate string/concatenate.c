#include<stdio.h>
#include<string.h>

int main()
{
    char str1[200],str2[200];

    printf("enter 1st string: \n");
    gets(str1);

    printf("enter 2nd string: \n");
    gets(str2);

    strcat(str1 , str2);
    printf("concatenation :\n %s",str1);

    return 0;
}

