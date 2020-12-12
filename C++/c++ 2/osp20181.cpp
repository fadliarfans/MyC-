#include<iostream>

using namespace std;

int main()
{
	int n,max=0,i,arr[100],count=0;
	cin>>n;
	if((n>100000)||(n<2))
	{
		goto akhir;
	}
	for(i=0;i<n;i++)
	 {
	 	cin>>arr[i];
	 	if(arr[i]>100)
	 	 {
	 	 	break;
		  }
	 }
	for(i=0;i<n;i++)
	 {
	 	if(max<arr[i])
	 	 {
	 	 	max=arr[i];
		  }
	 }
	 for(i=0;i<n;i++)
	 {
	 	if(max==arr[i])
	 	 {
	 	 	count++;
		  }
     
	 }
	  cout<<count;
	  akhir:
	  	return 0;
}
