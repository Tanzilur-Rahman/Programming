#include<bits/stdc++.h>


using namespace std;

int main()
{
    string str,output;
    int i;

    cout<<"enter a string in lowercase : \n";
    getline(cin,str);

    for(i=0;i<str.length();i++)
    {
        output+=toupper(str[i]);
    }

    cout<<"String converted to uppercase: "<<"\n"<<output;

    return 0;
}
