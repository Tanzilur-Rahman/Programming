#include<iostream>
#include<ctime>
using namespace std;
int main()
{
   time_t clock;
   clock=time(NULL);

   cout<<"Time & Date: " << ctime(&clock);

  return 0;
}
