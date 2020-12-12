#include<iostream>

using namespace std;

int main()
{
	 int a,b,c,d[100],x[100],y[100],g,o=0;
     int r=1;
	
	cin>>a;
	for(b=1;b<=a;b++)
	{
		cin>>d[b];
		x[b]=d[b]/10;
		y[b]=d[b]%10;
	}
	for(b=1;b<=a;b++)
	{
		for(g=1;g<=y[b];g++)
		{
			r=r*x[b];
		}
		o+=r;
		r=1;

	}
	cout<<o;
	return 0;
}
