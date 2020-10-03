#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,size,pos,num;

    cout<<"enter array size:\n";
    cin>>size;

    int arr[size];

    cout<<"enter elements:\n";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"enter position to insert: \n";
    cin>>pos;
    cout<<"enter new element:\n";
    cin>>num;

    if(pos>size||pos<=0)
    {
        cout<<"enter valid position"<<"1 to"<< size<<endl;
    }
    else{

    for(i=size;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    }


    arr[pos-1]=num;
    size++;

    cout<<"After insertion of new element:\n";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
