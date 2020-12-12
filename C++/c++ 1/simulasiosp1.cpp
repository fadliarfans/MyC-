#include<iostream>

using namespace std;

int main()
{
	int n,arr[100],temp,min,i;
	min=10000000;
	cin>>n;
	for(i=1;i<=n;i++)
	 {
	 	cin>>arr[i];
	 }
	 
	 for(n;n>0;n--)
	  {
	  	if(arr[n]<=min)
	  	 {
	  	 	min=arr[n];
		   }
		   temp+=min;
	  }
	  
	  cout<<temp;
}
