#include<iostream>

using namespace std;
int main()
{
	int a,b,c,x,y,f,n;
	f=0;
	cin>>a>>b>>c;
	for(x=1;x<=c;x++)
	{
		y=a*x;
		f+=y;
	}
	n=f-b;
	if (n<0)
	{
		n=0;
	}
	
cout<<n;
}
