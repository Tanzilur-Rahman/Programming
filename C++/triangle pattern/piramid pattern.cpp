#include<iostream>
using namespace std;

int main()
{
    int row,i,j,k;
    cout<<"enter row num:"<<endl;
    cin>>row;

    for(i=1;i<=row;i++)
    {
        for(j=i;j<=row;j++)
        {
            cout<<' ';
        }
        for(k=1;k<=(2*i-1);k++)
        {
            cout<<'*';
        }
        cout<<endl;
    }

    return 0;
}
