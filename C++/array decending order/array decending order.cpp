#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    cout<<"enter array size:\n";
    cin>>n;

    int arr[100];

    cout<<"enter elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+n, greater<int>());
    cout<<"Descending order:\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
