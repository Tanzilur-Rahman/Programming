#include<iostream>

using namespace std;


int main()
{
    int num,last,first;

    cout<<"enter number : "<<endl;
    cin>>num;

    last=num%10;

    while(num>=10)
    {
        num/=10;
    }
    first=num;
    cout<<"first digit : " <<first<<endl;
    cout<<"last digit : " <<last<<endl;

    cout<<"sum of first and last digit : " <<first+last<<endl;

    return 0;
}
