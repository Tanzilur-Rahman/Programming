#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,arr[5],sum=0,avg;
    cout<<"Bellow Average 33 is Fail !"<<endl;
    cout<<"Enter 5 subjects marks:"<<endl;
    for(i=1;i<=5;i++)
    {
        cin>>arr[i];
    }

    for(i=1;i<=5;i++)
    {
        sum+=arr[i];
    }

    avg=sum/5;
    cout<<"Average marks = "<< avg<<endl;
    if(avg<33)
    {
        cout<<"Result : FAIL !";
    }
    else{
        cout<<"Result : PASS !";
    }


    return 0;
}
