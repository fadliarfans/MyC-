#include<iostream>

using namespace std;

int main()
{
	int b,c;
	long int a[100];
	for(int i=1;i<=100;i++)
	{
		a[i]=101-i;
		  if(a[i]>1)
		  {
		  	a[i]*=(a[i]+3);
		  }
		cout<<a[i]<<" ";
	}
	return 0;
}
