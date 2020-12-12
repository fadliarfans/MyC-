#include<iostream>

using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	if(a%2==1)
	{
	if ((a<=12)&&(b<=31))
	{	
	if (b>a)
	{
		cout<<a<<endl;
	}
	else
	{
		cout<<a-1<<endl;
	}
}
}

if(a==2)
	{
	if ((a<=12)&&(b<=28))
	{	
	if (b>a)
	{
		cout<<a<<endl;
	}
	else
	{
		cout<<a-1<<endl;
	}
}
a=1;
}

if(a%2==0)
	{
	if ((a<=12)&&(b<=30))
	{	
	if (b>a)
	{
		cout<<a<<endl;
	}
	else
	{
		cout<<a-1<<endl;
	}
}
}
	return 0;
}
