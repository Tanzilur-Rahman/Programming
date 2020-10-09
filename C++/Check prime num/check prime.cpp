#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num,i,count=0;
    cout<<"Enter a Number : "<<endl;
    cin>>num;
    if(num>1)
    {
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }

    if(count==0)
    {
        cout<<num << " is a prime number";
    }
    else{
        cout<<num << " is not a prime number";
    }
    }

    else{
        cout<<num << " is not a prime number";
    }

    return 0;
}
