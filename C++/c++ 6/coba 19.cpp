#include<iostream>

using namespace std;



int main()
{
	int n,arr[60];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]>37)
		 if(arr[i]%5!=0)
		  {
		  	if((arr[i]+1)%5==0)
		  	  {
		  	  	arr[i]+=1;
				}
			if((arr[i]+2)%5==0)
		  	  {
		  	  	arr[i]+=2;
				}
		  }
		cout<<arr[i]<<endl;
	}
}
