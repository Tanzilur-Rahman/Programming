#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n;

    cout<<"enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"enter " << n << " numbers:\n ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"negative numbers:\n";
    for(i=0;i<n;i++)
    {

        if(arr[i]<0)
        {
            cout<<arr[i]<<" ,";
        }

        else{
            cout<<"No negative numbers exists! \n";
            break;
        }

    }


    return 0;
}
