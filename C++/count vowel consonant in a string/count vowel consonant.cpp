#include<bits/stdc++.h>

using namespace std;


int main()
{
    string str;
    int v,c,i;
    v=c=0;
    cout<<"enter a string :\n";
    getline(cin,str);

    for(i=0;i<str.length();i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {


        if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
               str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'  )
        {
            v++;
        }

        else
        {
            c++;
        }

        }

        else
        {
            cout<<"please enter a string !\n";
        }
    }

    cout<<"total vowel : " << v<<endl;
    cout<<"total consonant : " << c<<endl;

    return 0;
}
