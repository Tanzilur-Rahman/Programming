#include<iostream>

using namespace std;

int main()
{
    double num1,num2,result;
    char op;


    cout<<"Enter 1st num :";
    cin>>num1;
    cout<<"Enter operator :";
    cin>>op;
    cout<<"Enter 2nd num :";
    cin>>num2;

    if(op=='+')
    {
        result=num1+num2;
        cout.precision(2);
        cout<<fixed<<"Sum = " << result;
    }

    else if(op=='-')
    {
        result=num1-num1;
        cout.precision(2);
        cout<<fixed<<"Subtraction = " << result;
    }
    else if(op=='*')
    {
        result=num1*num2;
        cout.precision(2);
        cout<<fixed<<"Multiplication = " << result;
    }
    else if(op=='/')
    {
        result=num1/num2;
        cout.precision(2);
        cout<<fixed<<"Division = " << result;
    }




    return 0;
}
