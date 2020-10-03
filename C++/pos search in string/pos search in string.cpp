#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str,sr;
    int x;
    cout<<"enter a string :\n";
    getline(cin,str);
    cout<<"enter search: \n";
    cin>>sr;

    x=str.find(sr);
    cout<<"search result: "<< x;

    return 0;
}
