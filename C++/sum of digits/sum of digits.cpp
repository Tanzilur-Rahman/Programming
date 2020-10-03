#include<iostream>

using namespace std;

int main()
{
    int num,last,sum=0;
    cout<<"Enter number:"<<endl;
    cin>>num;

     while(num>0)
     {
         last=num%10;
         sum=sum+last;
         num=num/10;
     }
    cout<<"Sum of digits:"<<sum;
    return 0;
}
