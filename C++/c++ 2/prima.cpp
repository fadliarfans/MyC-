#include<iostream>

using namespace std;

bool prim=false;
int n,i,j,tmp,a[1000];

bool prima(int x)
{
	int y,count;
	count=0;
	for(y=1;y<=n;y++)
	{
		if(x % y ==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		prim=true;
	}
	else
	{
		prim=false;
	}
	return prim;
}

int main()
{
	cin>>n;
	cout<<prima(n);
}
