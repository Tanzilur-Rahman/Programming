#include<iostream>

using namespace std;

int main()
{
    double num1,num2;

    cout<<"Enter 1st number : "<<endl;
    cin>>num1;
    cout<<"Enter 2nd number : "<<endl;
    cin>>num2;

    if(num1>num2)
    {
        cout<<"Max :"<<num1<<endl;
        cout<<"Min :"<<num2<<endl;
    }

    else if(num2>num1)
    {
        cout<<"Max :"<<num2<<endl;
        cout<<"Min :"<<num1<<endl;
    }

    else
    {
        cout<<"Both "<<num1 <<" "<< " and "<<num2 <<" are equal";
    }

    return 0;
}
