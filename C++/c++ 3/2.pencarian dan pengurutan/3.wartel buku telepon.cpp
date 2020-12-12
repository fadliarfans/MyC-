#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	
	char stra[1000][1000],strb[1000][1000];
	int n,q,i,arr[1000],j,tmp1[1000];
	cin>>n>>q;
	for(i=1;i<=n;i++)
	  {
	  	cin>>stra[i];
	  	cin>>arr[i];
	  }
	  
	for(i=1;i<=q;i++)
	  {
	  	cin>>strb[i];
	  }
	  
	  for(i=1;i<=q;i++)
	  {
	  	tmp1[i]=-1;
	  	   for(j=1;j<=n;j++)
	       {
	         if(strcmp(strb[i],stra[j])==0)
	           {
	             tmp1[i]=j;
			   }
			 
	       }
	       
	  }
	  
	  for(i=1;i<=q;i++)
	  {
	  	if(tmp1[i]==-1)
	  	{
	  		cout<<"NIHIL"<<endl;
		  }
		  else
		  {
		  	cout<<arr[tmp1[i]]<<endl;
		  }
	  	
	  }
}
