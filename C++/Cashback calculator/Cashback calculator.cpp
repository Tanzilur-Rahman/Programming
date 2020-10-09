#include<iostream>
using namespace std;

int main()
{
    double amount,cashback,total;
    cout<<"Welcome To Cashback Calculator"<<endl;

    cout<<"Enter amount :"<<endl;
    cin>>amount;
    cout<<"Enter cash back '%' :"<<endl;
    cin>>cashback;

    total=(amount*cashback)/100;
    cout<<"You will get "<< total << " Taka Cash back !"<< endl;


    return 0;
}
