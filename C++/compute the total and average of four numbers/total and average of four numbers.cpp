#include <iostream>
using namespace std;

    int main()
    {
    	float n1,n2,n3,n4,tot,avrg;

        cout<<" Input 4 numbers: "<<endl;
    	cin>> n1;
    	cin>> n2;
    	cin>> n3;
    	cin>> n4;

    	tot=n1+n2+n3+n4;
		avrg=tot/4;
        cout<<" The total of four numbers is : "<< tot << endl;
        cout<<" The average of four numbers is : "<< avrg << endl;
        cout << endl;
        return 0;
    }
