#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    string str;
    cout<<"enter a string: \n";
    getline(cin,str);

    reverse(str.begin(),str.end());
    cout<<"reverse : "<< str;


    return 0;
}
