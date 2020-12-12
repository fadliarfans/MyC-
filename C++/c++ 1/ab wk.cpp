#include<iostream>

using namespace std;

int main()
{
	int a,b,c;
	cin>>a;
	if (a<-4)
	{
		b=a+5;
		cout<<b;
	}
	else if(a>7)
	{
		b=a*a*a+2*a;
		cout<<b;
	}
	
	else
	{
		b=a*a-3*a;
		cout<<b;
	}
	return 0;
	
}
