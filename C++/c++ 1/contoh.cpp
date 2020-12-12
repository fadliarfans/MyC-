#include<iostream>

using namespace std;

int main()
{
	int n,a,b,i[1000],ok,tmp;
	cin>>n;
	for(ok=1;ok<=n-1;ok++)
     	{
     		cin>>i[ok];
	    }
	cin>>a>>b;
	tmp=0;
	for(a;a<b;a++)
	  {
	  	tmp+=i[a];
	  }
	  
	  cout<<tmp<<endl;
	  return 0;
}


