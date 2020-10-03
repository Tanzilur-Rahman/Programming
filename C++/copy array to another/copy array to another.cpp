#include<bits/stdc++.h>

using namespace std;


int main()
{
    int arr1[200],arr2[200];
    int i,n;

    cout<<"enter array size: "<<endl;
    cin>>n;
    cout<<"enter string:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }
    cout<<"new array: \n";
    for(i=0;i<n;i++)
    {
        cout<<arr2[i]<<endl;
    }



    return 0;
}
