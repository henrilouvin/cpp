#include <iostream>
#include <cstdlib>
#include <limits>
using namespace std;

int main()
{
        // Basic print on stdout
	cout<<"Hodor."<<endl;

        //!!! WARNING !!!
        // This loop will blow your RAM up
        int *a=0;
	cout<<"Trying to saturate your RAM..."<<endl;
        for(int i=0;i<INT64_MAX;i++)
            a = new int(666);
	cout<<"Failed."<<endl;
	return 0;
}

