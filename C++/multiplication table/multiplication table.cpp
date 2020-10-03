#include<iostream>

using namespace std;


int main()
{
    int num,i,mul;

    cout<<"enter a number:\n";
    cin>>num;
    cout<<"Multiplication table of "<< num <<":"<< endl;
    for(i=1;i<=10;i++)
    {
        mul=num*i;
        cout<<num<<'*'<<i<<'='<<mul<<endl;
    }



    return 0;
}
