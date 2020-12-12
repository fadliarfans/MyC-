#include<iostream>

using namespace std;

int main()
{
	int n,i,a[10000],sum,j,max,dat;
	sum=0;
	cin>>n;
	max=-100;
	for(i=1;i<=n;i++)
	 {
	 	cin>>a[i];
	 }
	 
	 for(i=1;i<=n;i++)
	 {
	 	  sum=0;
	 	for(j=1;j<=n;j++)
	 	 {
	 	    
	 	 	if(a[i]==a[j])
	 	 	{
	 	 		sum++;
			  }
			 
			 }
			  if(sum>max)
			  {
			  	max=sum;
			  	dat=a[i];
			  }
	 }
	 cout<<dat;
	 	 	
	 	 	
	
	 
}

