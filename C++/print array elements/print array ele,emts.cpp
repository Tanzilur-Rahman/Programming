#include<bits/stdc++.h>

using namespace std;

int main()
{
    string arr[100];
    int i,n;

    cout<<"enter array size:";
    cin>>n;
    cout<<"enter " << n << " array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"array elements are:\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }



    return 0;
}
