#include<Iostream>

using namespace std;

int idn=1,n,j,k,prefixsum[1000],tmpa,tmpb,arr[1000],first[1000],last[1000],tmp[1000],u,h,i,count[1000];

void isiprefixsum(int x)
{
	prefixsum[1]=tmp[x];
	for(u=2;u<=k-x+1;u++)
	  {
	  	prefixsum[u]=prefixsum[u-1]+tmp[u];
	  }
	 
	  
}


int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	
	cin>>h;
	for(i=1;i<=h;i++)
	{
		cin>>first[i]>>last[i];
		
	}
	
	
	for(i=1;i<=h;i++)
	 {
	 	k=1;
	 	count[i]=0;
	 	for(j=first[i];j<=last[i];j++)
	 	  {
	 	  	tmp[k]=arr[j];
	 	  	k++;
	 	 
	 	  	
		   }
		   k--;
		   
		   int z=k;;
		   
		for(j=1;j<k;j++)
		   {
		   	isiprefixsum(1);
		   	tmpa=prefixsum[j];
	
		   	
		   	
		   	isiprefixsum(j+1);
		   	tmpb=prefixsum[z];
		   	z--;
		   	
		   	if(tmpa==tmpb)
		    	{
		   		count[i]++;
			   }
		   }
			 
	 }
	 for(i=1;i<=h;i++)
	  {
	  	cout<<count[i]<<" ";
	  }
	
}


