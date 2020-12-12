#include<iostream>

using namespace std;

int main()
{
	int a,b,c,x,y;
	y=0;
	cin>>a>>b>>c;
	for(x=1;x<=c;x++)
	{
		if(c%x==0)
		{
			if((x>=a)&&(x<=b))
			{
				y++;
			}
		}
	}
	cout<<y;
	return 0;

}
