#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;

    cout<<"enter array size: \n";
    cin>>n;
    int arr[n];
    cout<<"enter " <<n<< " numbers:\n";
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    cout<<"even :\n";
    for(i=1;i<=n;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<endl;
        }
    }
    cout<<"odd :\n";
    for(i=1;i<=n;i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<endl;
        }
    }


    return 0;
}


