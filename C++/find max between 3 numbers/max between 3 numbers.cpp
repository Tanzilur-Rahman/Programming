#include<iostream>


using namespace std;

int main()
{
    int num1,num2,num3;

    cout<<"Enter 1st number : "<<endl;
    cin>>num1;
    cout<<"Enter 2nd number : "<<endl;
    cin>>num2;
    cout<<"Enter 3rtd number : "<<endl;
    cin>>num3;

    if(num1>num2 && num1>num3)
    {
        cout<<"Max : "<<num1;
    }

    else if(num2>num1 && num2>num3)

    {
        cout<<"Max : "<<num2;
    }

    else if(num3>num1 && num3>num2)
    {
        cout<<"Max : "<<num3;
    }

    else
    {
        cout<<"All are equal : "<<num1 <<"=" <<num2 <<"=" <<num3;
    }


    return 0;
}
