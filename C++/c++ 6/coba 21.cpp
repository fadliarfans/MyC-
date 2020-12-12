#include<iostream>

using namespace std;

int main()
{
	int x1,x2,v2,v1,i;
	cin>>x1>>v1>>x2>>v2;
	for(i=1;i<10000;i++)
	{
		if(x1==x2)
		{
			cout<<"YES";
			break;
		}
		else
		{
		   x1+=v1;
		   x2+=v2;
		}
	}
	if(i==10000)
	 {
	 	cout<<"NO";
	 }
}
