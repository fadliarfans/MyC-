#include<iostream>

using namespace std;

int arr[1000000],tmp,j,i,n,h,tmp2;

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

int binarysearch(int h)
{
	int mid,left,right;
	left=1;
	right=n;
	mid=n/2;
	while(h!=arr[mid])
	{
	if(h>arr[mid])
	   {
	   	 left=mid+1;
	   	 mid=(left+right)/2;
	   }
	else if(h<arr[mid])
	   {
	   	right=mid-1;
	   	mid=(left+right)/2;
	   }
	else if ((mid>n)||(mid<1))
	    {
	    	return -1;
		}
	 
	   
   }
   
     return mid;
}

int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	   {
	   	cin>>arr[i];
	   }
	   
	bublesort();
	
	cin>>h;
	
	tmp2=binarysearch(h);
	
	if(tmp2==-1)
	  {
	  	cout<<"Tak de la";
	  }
	  
	else 
	{
		cout<<"ada di index "<<tmp2;
	}
	
	
}
