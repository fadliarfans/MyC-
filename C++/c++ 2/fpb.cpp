#include<iostream>

using namespace std;

int fpb(int x,int y)
{
	int f,j,v;
	j=max(x,y);
	v=min(x,y);
	if(y==0)
	{
		f=j;
	}
	else
	{
		f=fpb(v,j-v);
	}
	return f;
}

int main()
{
	int a,b;
cin>>a>>b;
cout<<fpb(a,b);
return 0;
}



