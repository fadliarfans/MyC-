#include<iostream>

using namespace std;


int fpb(int a,int b)
{
	if(b==0)
	  {
	  	return a;
	  }
	else
	  {
	  	fpb(b,a % b);
	  }
}

int kpk(int a,int b)
{
	int ans;
	ans=a*b/fpb(a,b);
	return ans;
}

int main()
{
	int i,n,tmp,arr[1000];
	cin>>n;
	for(i=1;i<=n;i++)
	  {
	  	cin>>arr[i];
	  }
	  tmp=arr[1];
	for(i=1;i<=n-1;i++)
	  {
	  	tmp=kpk(tmp,arr[i+1]);
	  }
	  cout<<tmp;
}
