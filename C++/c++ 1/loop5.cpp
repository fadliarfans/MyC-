#include<iostream>

using namespace std;

int main()
{
	long int a,b,maxi,mino,tot,n;
	long int x[a];
maxi=-1000000;
mino=1000000;
	tot=0;
	cin>>a;
	for(b=1;b<=a;b++)	
	{
		cin>>x[b];
		if(x[b]>maxi)
		{
			maxi=x[b];
		}
		if(x[b]<mino)
		{
			mino=x[b];
		}
		tot+=x[b];
	}
	cout<<mino<<" "<<maxi<<" "<<tot<<endl;
	return 0;
}
