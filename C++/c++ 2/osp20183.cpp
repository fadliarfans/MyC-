#include<iostream>

using namespace std;

int main()
{
	int n,j,i,max,arr[10000],count[1000],pivot=0;
	max=0;
	cin>>n;
   for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		 {
		 	if(arr[i]=arr[j])
		 	{
		 		count[i]++;
		 		pivot=0;
			 }
			else if((arr[i]!=arr[j])&&(pivot>=0))
			    {
			    	count[i]++;
			    	pivot--;
			    }
			else
			{
				break;
			}
			
		 }
	}
	for(j=0;j<n;j++)
	{
		if(max<count[j])
		{
			max=count[j];
		}
	}
	max++;
	
	cout<<max;
}
