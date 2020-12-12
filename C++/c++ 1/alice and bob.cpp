#include<iostream>

using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	if (a>b)
	{
		cout<<"Alice";
	}
	else if(a<b)
	{
		cout<<"Bob";
	}
	else
	{
		cout<<"Draw";
	}
	return 0;
}
