#include<iostream>

using namespace std;

int main()
{
	int food=50;
	   cout<<food<<endl;         // output(50)
	   cout<<&food<<endl;        // output(alamat food)
	int* kodok=&food;
    	cout<<kodok<<endl;       // output(alamat food)
    	cout<<*kodok<<endl;      // output (50)
	int sapi= *kodok;
     	cout<<sapi;              // output(50)
 	
}
