#include<iostream>

using namespace std;

int main()
{
	int a,n,b;
	char o;
	cout<<"==== program barisan dan deret aritmatika ===="<<endl<<endl<<endl;
	cout<<"masukan a = ";
	cin>>a;
	cout<<"masukan b = ";
	cin>>b;
	cout<<"masukan n = ";
	cin>>n;

	cout<<"ketik a jika mencari Un atau ketik b untuk mencari Sn"<<endl<<endl;
	cin>>o;
	cout<<endl;
	
	
	if(o=='a')
	{
		cout<<"Un = "<<a+(n-1)*b;
	}
	
	else if(o=='b')
	{
		cout<<"Sn = "<<n*(2*a+(n-1)*b)/2;
	}
	else
	{
		cout<<"tidak ada di option";
	}

	
}
