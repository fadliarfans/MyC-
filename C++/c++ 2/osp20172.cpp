#include<iostream>

using namespace std;

int main()
{
	
int i,n,count,arr[100000];
	cin>>n;
	count=0;
	for(i=1;i<=n-1;i++)
	  {
	  	cin>>arr[i];
	  	if(arr[i]!=1)
	  	  {
	  	  	count++;
			}
	  }
	  cout<<count;
	
}
