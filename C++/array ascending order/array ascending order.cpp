#include<bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int n,i;

    cout<<"enter array size:\n";
    cin>>n;

    int arr[n];

    cout<<"enter elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    cout<<"ascending order:\n";

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
