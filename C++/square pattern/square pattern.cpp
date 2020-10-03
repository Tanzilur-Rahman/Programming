#include<iostream>

using namespace std;

int main()
{
    int i,j,row;

    cout<<"Enter row number:"<<endl;
    cin>>row;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row;j++)
        {
            if(i==1||i==row||j==1||j==row)
            {
                cout<<'#';
            }
            else
            {
                cout<<' ';
            }
        }
        cout<<endl;
    }


    return 0;
}
