#include<iostream>

using namespace std;

int arr[100],temp;

int sapi(int x,int y)
{
   	if(y>1)
	{
		temp=sapi(x+1,y-1)+arr[x];
		return temp;
	}
	else
	{
		return arr[x];
	}
}


int main()
{
	int n,d,arr2[200],m,count=0;
	cin>>n;
	
	for(int i=0;i<n;i++)
	  {
	  	cin>>arr[i];
	  }
	cin>>d>>m;
	if(n==1)
	{
		n++;
	}
		for(int i=0;i<n-1;i++)
	  {
	  	arr2[i]=sapi(i,m);
	  }
	  for(int i=0;i<n-1;i++)
	  {
	  	if(arr2[i]==d)
	  	 {
	  	 	count++;
		   }
	  }
	  cout<<count;
}
