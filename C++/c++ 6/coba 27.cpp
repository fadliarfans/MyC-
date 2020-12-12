#include<iostream>

using namespace std;

int main()
{
	int n,k,arr[100],f=0;
	cin>>n>>k;
	 for(int i=0;i<n;i++)
	  {
	  	cin>>arr[i];
	  }
	for(int i=0;i<n;i++)
	 {
	 	for(int j=i+1;j<n;j++)
	 	 {
	 	 	if((arr[i]+arr[j])%k==0)
	 	 	{
	 	 		f++;
			  }
		  }
	 }
	 cout<<f;
}
