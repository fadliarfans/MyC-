#include<iostream>

using namespace std;

int main()
{

int a[100][100],b,c,d[100],x,i;

for(b=1;b<=5;b++)
{
	d[b]=0;
}

for(b=1;b<=5;b++)
{
	for(c=1;c<=5;c++)
	{
		cin>>a[b][c];
	}
	for(c=1;c<=5;c++)
	{
		if(c<6)
		{
		d[b]+=a[b][c];
       	}
	}
}
x=0;
for(b=1;b<=5;b++)
{
	if (x<d[b]){
	
	x=d[b];
}
}
for(b=1;b<=5;b++)
{
	if(x==d[b])
	{
		i=b;
	}
}


cout<<i<<" "<<x;

return 0;

}
