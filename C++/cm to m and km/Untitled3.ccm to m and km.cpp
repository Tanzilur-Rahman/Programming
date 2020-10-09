#include<iostream>
using namespace std;

int main()
{
    float km, meter,cm;

    cout << " Input centimeter : ";
    cin >> cm;
	meter = (cm/100);
	km = (cm/100000);
	cout << " The  meter is: "<< meter << endl;
	cout << " The  kilometer is: "<< km << endl;
	cout << endl;
    return 0;
}
