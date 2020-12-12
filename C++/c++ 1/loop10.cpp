#include<iostream>
using namespace std;
int main()
{
	signed long long int x;
	signed int a[1000000],b,c,n;
	x=0;
	n=1000000000;
	cin>>b;
	if((b<=100000)&&(b>=1)){
	
	for(c=1;c<=b;c++)
	{
		cin>>a[c];
	}
	for(c=1;c<=b;c++)
	{
		x+=a[c];
	}

	if(x%2!=0)
	{
		for(c=1;c<=b;c++)
		{
			if(a[c]%2==1)
			{
				if(a[c]<n)
				n=a[c];
			}
		}
		x-=n;
	}
	cout<<x;
}
	return 0;
}
