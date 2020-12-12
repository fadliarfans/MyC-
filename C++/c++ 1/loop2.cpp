#include<iostream>

using namespace std;

int main()
{
	int b,c,x,y;
	int a[100000];
	b=1;
	for(x=1;a[x]<b;x++)
	{
	cin>>a[x];
	b=a[x]+1;
	if(a[x]==0)
	{
		break;
	}
	
    }
    for(y=1;y<x;y++)
    {
    	cout<<"Case "<<y<<": "<<a[y]<<endl;;
	}
	return 0;
}
