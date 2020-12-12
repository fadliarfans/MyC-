#include<iostream>

using namespace std;

int domino(int x,int y);

int main()
{
	int a,b,c,d;
	cin>>a>>b;
	if ((a&&b>=1)&&(a&&b<=16))
	{
	
	cout<<domino(a,b);
}
	return 0;
	
}

int domino(int x,int y)
{
	int h;
	h=x*y;
	h/=2;
	return h;
}
