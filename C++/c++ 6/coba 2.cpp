#include<iostream>

using namespace std;

int anjay(int x,int o)
{
	int y;
	y=x*2+o;
	return y;
	
}



int main()
{
	int a,b;
	cin>>a;
	b=a+anjay(a,7);
	cout<<b;

	return 0;
	
	
}
