#include<iostream>

using namespace std;

int main()
{
	int x,y,sum;
	cin>>x>>y;
	sum=0;
	while((x>0)||(y>0))
	  {
	  	sum=sum+x*y;
	  	x--;
	  	y--;
	  }
	cout<<sum;
	
}
