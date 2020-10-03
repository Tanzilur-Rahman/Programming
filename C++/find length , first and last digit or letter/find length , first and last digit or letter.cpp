#include<iostream>
using namespace std;
int main()
{
    string str;

    cout<<"Enter num/string : "<<endl;
    cin>>str;

    cout<<"Total : "<< str.length()<<endl;
    cout<<"1st position: " << str[0]<<endl;
    cout<<"last position: " << str[str.length()-1]<<endl;


    return 0;
}
