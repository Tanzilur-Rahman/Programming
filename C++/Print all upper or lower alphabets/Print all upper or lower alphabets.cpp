#include<bits/stdc++.h>


using namespace std;

int main()
{
    char i,j;
    string str;

    cout<<"Enter 'up' for uppercase and 'low' for lowercase : ";
    cin>>str;

    if(str=="low")
    {

    for(i='a';i<='z';i++)
    {
        cout<<i<<endl;
    }

    }

    else if(str=="up")
{

    for(j='A';j<='Z';j++)
    {
        cout<<j<<endl;
    }

}

    return 0;
}

