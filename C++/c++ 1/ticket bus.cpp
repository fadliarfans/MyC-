#include<iostream>

using namespace std;

int main()
{
	int n,m,a,b,x,y,z,o,p,q;
	cin>>n>>m>>a>>b;
	if(n&&m&&a&&b<=1000)
	{
	x=n%m;
	y=n/m;
	o=y*b;
    p=x*a;
    q=o+p;
    
    if (q>a*n)
    {
    	q=a*n;
	}
    cout<<q;
}
    return 0;
}
