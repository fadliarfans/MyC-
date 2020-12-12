#include<iostream>

using namespace std;

int main()
{
	int n,ans;
	cin>>n;
	if(n%2==1)
	  {
	  	ans=n/2+1;
	  }
	else if(n%2==0)
	{
		ans=n/2;
	}
	cout<<ans;
}
