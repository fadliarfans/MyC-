#include<iostream>

using namespace std;

int main()
{
	int a[100],b[100],x,y,m,n,g,f;
	m=1;
	n=0;
	cin>>g;
	
	for(f=1;f<=g;f++)
	{
		cin>>a[f]>>b[f];
    }
	for(f=1;f<=g;f++)
	{
		
	for(x=1;x<=a[f];x++)
	{
		for(y=1;y<=b[f];y++)
		{
			if(y%2==m)
			{
			cout<<"*";
	     	}
	     	if(y%2==n)
	     	cout<<".";
		}
		if(m==1)
		{
			m=0;
		}
		else if(m==0)
		{
			m=1;
		}
	    if(n==0)
		{
			n=1;
		}
		else if(n==1)
		{
			n=0;
		}
		cout<<endl;
	}
	cout<<endl;
	m=1;
	n=0;
}
	return 0;
}
