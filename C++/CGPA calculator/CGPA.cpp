#include<iostream>
using namespace std;

int main()
{

    int sub,i,total_c=0;
    cout<<"Enter Subjects Quantity : "<<endl;
    cin>>sub;

    double grade[sub];
    int credit[sub];
    double mul,sum=0,cgpa;
    cout<<"Enter  Grade & Credeit:"<<endl;
    cout<<"========================================"<<endl;
    for(i=1;i<=sub;i++)
    {
        cout<<"Subject :"<<i<<endl;
        cout<<"Enter Grade :"<<endl;
        cin>>grade[i];
        cout<<"Enter Credit :"<<endl;
        cin>>credit[i];
        cout<<"----------------------"<<endl;
    }

    for(i=1;i<=sub;i++)
    {
        mul=grade[i]*credit[i];
        sum+=mul;

        total_c+=credit[i];
    }

    cgpa=sum/total_c;
    cout<<"========================================"<<endl;
    cout<<"Your CGPA = "<< cgpa << endl;












    return 0;
}
