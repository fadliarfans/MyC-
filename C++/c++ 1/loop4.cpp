#include<iostream>

using namespace std;

int main()
{
	long int a,b,c,d,e,x;
	d=0;
	x=0;
	cin>>a;
	if(a<0)
	{
		a=a*-1;
	}
	for(b=1;b<=a*10;b*=10)
	{
		c=a%b;
		x=c;
		for(e=1;e<=b/10;e*=10)
		{
			c=x/e;
		}
		d=d+c;
	}
	cout<<d<<endl;;

	return 0;
}
