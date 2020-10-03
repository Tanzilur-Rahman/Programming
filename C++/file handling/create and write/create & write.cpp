#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    ofstream file("file.txt");

    cout<<"write something on the file:\n";
    getline(cin,str);
    file<<str;
    file.close();
    cout<<"Success!\n";

    return 0;
}
