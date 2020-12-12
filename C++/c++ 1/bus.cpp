#include<iostream>

using namespace std;

int main()
{
	int n,m,a,b,x,y,z,o,p,q;
	cin>>n>>m>>a>>b;
	if((n<=1000)&&(m<=1000)&&(a<=1000)&&(b<=1000)&&(a&&b&&n&&m>=1))
	{
	x=n%m;
	y=n/m;
	o=y*b;
    p=x*a;
    q=o+p;
    
    if (m>n)
	{
		q=b;
	}
	
    if (q>a*n)
    {
    	q=a*n;
	}
	
    cout<<q<<endl;
}
    return 0;
}
