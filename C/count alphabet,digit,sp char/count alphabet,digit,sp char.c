#include<stdio.h>
#include<string.h>


int main()
{
    char str[200];
    int alp,dig,spc,i;
    alp=dig=spc=0;
    printf("enter a string:\n");
    gets(str);

    for(i=0;i<strlen(str);i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            alp++;
        }

        else if(str[i]>='0' && str[i]<='9')
        {
            dig++;
        }

        else{
            spc++;
        }

    }

    printf("Total Alphabet: %d\n",alp);
    printf("Total Digit: %d\n",dig);
    printf("Total Special Char: %d",spc);


    return 0;
}
