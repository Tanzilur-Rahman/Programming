#include<iostream>


using namespace std;

int main()
{
    int start_point,end_point,i;

    cout<<"Enter  start point : ";
    cin>>start_point;
    cout<<"Enter  end point : ";
    cin>>end_point;

    cout<<"Even:\n";
    for(i=start_point;i<=end_point;i++)
    {
        if(i%2==0){
           cout<< i << endl;

           }

    }
    cout<<"Odd:\n";
    for(i=start_point;i<=end_point;i++)
    {
        if(i%2!=0){
           cout<< i << endl;

           }

    }




    return 0;
}

