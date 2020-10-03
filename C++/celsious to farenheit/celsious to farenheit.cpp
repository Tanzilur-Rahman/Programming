#include<bits/stdc++.h>

using namespace std;


int  main()
{
    double celcius,farenheit;

    cout<<"Enter temperature in Celsious : ";
    cin>>celcius;
    farenheit=(celcius*9/5)+32;
    cout<<"Temperature in Farenheit : "<<fixed<<setprecision(3)<<farenheit;

    return 0;
}
