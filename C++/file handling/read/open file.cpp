#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    ifstream open("file.txt");

   while (getline(open,str))
   {

       cout<<str;
   }

   open.close();

    return 0;
}
