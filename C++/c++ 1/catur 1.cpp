#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e,o,x,y,z,v,m,j;
	cin>>a>>b>>c>>d>>e>>o;
	if((a&b&c&d&e&o>=0)&&(a&b&c&d&e&o<=10))
	{
	
	y=0;
	x=0;
	v=0;
	m=0;
	j=0;
	z=0;
	while(a>1)
	{
		a--;
		x--;
	}
	
	while(a<1)
	{
		a++;
		x++;
	}
	
	while(b>1)
	{
		b--;
		y--;
	}
	
	while(b<1)
	{
		b++;
		y++;
	}
	
	while(c>2)
	{
		c--;
		z--;
	}
	
	while(c<2)
	{
		c++;
		z++;
	}
	
	while(d>2)
	{
		d--;
		v--;
	}
	
	while(d<2)
	{
		d++;
		v++;
	}
	
	while(e>2)
	{
		e--;
		m--;
	}
	
	while(e<2)
	{
		e++;
		m++;
	}
	while(o>8)
	{
		o--;
		j--;
	}
	while(o<8)
	{
		o++;
		j++;
	}

	cout<<x<<" "<<y<<" "<<z<<" "<<v<<" "<<m<<" "<<j;
}
	return 0;
	
}
