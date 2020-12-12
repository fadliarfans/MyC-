#include<iostream>

using namespace std;

int main()
{
	int sapi;
	int* kodok;

	
	cout<<sapi<<"\n";
	cout<<&sapi<<"\n";
	cout<<kodok<<"\n";
	kodok=&sapi;
	cout<<kodok<<"\n";
	sapi=4;
	cout<<*kodok<<"\n";
	*kodok=90;
	cout<<sapi<<"\n";
	
	
	return 0;
	
	
}
