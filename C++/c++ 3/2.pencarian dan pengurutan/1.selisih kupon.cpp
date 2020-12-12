#include<iostream>
#include<math.h>

using namespace std;

int main()

{
	int arr[1000],brr[1000],min,n,x,tmp,tmp2,i;
	min=200001;
	cin>>n>>x;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		brr[i]=abs(x-arr[i]);
	
	}
	for(i=0;i<n;i++)
	{
	    if(min>brr[i])
		{
			min=brr[i];
			tmp=i;
			tmp2=0;
			}	
		else if(min==brr[i])
		{
			tmp2=i;
		}
	}
	if((arr[tmp]<arr[tmp2])&&(tmp2!=0))
	  {
	  	cout<<arr[tmp];
	  }
	else if((arr[tmp]>arr[tmp2])&&(tmp2!=0))
	  {
	  	cout<<arr[tmp2];
	  }
	   else
	   {
	   	cout<<arr[tmp];
	   }
}
