#include<iostream>

using namespace std;

int arr[1000000],tmp,j,i,n;

void bublesort()
{
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		   {
		   	if(arr[j]>arr[j+1])
		   	  {
		   	  	tmp=arr[j];
		   	  	arr[j]=arr[j+1];
		   	  	arr[j+1]=tmp;
				 }
		   }
	}
}

int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	   {
	   	cin>>arr[i];
	   }
	   
	bublesort();
	
	for(i=1;i<=n;i++)
	{
		cout<<arr[i];
	}
}
