#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int alp,dig,sp,i;
    alp=dig=sp=0;

    cout<<"enter a string : \n";
    getline(cin,str);

    for(i=0;i<str.length();i++)
    {
        if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))
        {
            alp++;
        }

        else if(str[i]>='0' && str[i]<='9')
        {
            dig++;
        }

        else{
            sp++;
        }
    }

    cout<<"Total Alphabet :"<< alp<<endl;
    cout<<"Total Digit :"<< dig<<endl;
    cout<<"Total Special Char :"<< sp;





    return 0;
}
