#include<iostream>
using namespace std;

int main()
{
    string fname,lname;
    int age;
    cout<<"Fill the form:"<<endl;
    cout<<"Enter First Name :"<<endl;
    cin>>fname;
    cout<<"Enter Last Name :"<<endl;
    cin>>lname;
    cout<<"Enter Age :"<<endl;
    cin>>age;
    cout<<"*======================&======================*"<<endl;
    cout<<"Your Data:"<<endl;
    cout<<"First Name: " <<fname<<endl;
    cout<<"Last Name: " <<lname<<endl;
    cout<<"Full Name: " <<fname +" " + lname<<endl;
    cout<<"Age: " <<age<<endl;
    cout<<"*======================&======================*"<<endl;


    return 0;
}
