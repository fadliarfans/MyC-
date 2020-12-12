#include<iostream>

using namespace std;

int main()
{
	int n,m,x,z,k,g,d;
	k=1;
	cin>>n>>m;
	if((n>=1)&&(m>=2)&&(n&&m<=100))
	{
	d=m;
	for(g=1;g<=n;g++)
	{
		x++;
		if(g==d)
		{
			k++;
			d=m*k;
			n++;
		   
		}
	}
	cout<<x<<endl;
}
	return 0;
}
