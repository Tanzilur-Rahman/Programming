#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int i,words=1;
    cout<<"enter a string : \n";
    getline(cin,str);

    for(i=0;i<str.length();i++)
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            words++;
        }

    }

    cout<<"total words: "<< words;


    return 0;
}
