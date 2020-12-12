#include<iostream>

using namespace std;

int main()
{
	int m,n,k,arr[100][100],i,j,tmp1=0,tmp2=0;
	cin>>n>>m>>k;
	
	for(j=1;j<=m;j++)
	  	   {
	       arr[0][j]=1;
		   }
	for(j=1;j<=n;j++)
	  	   {
	       arr[j][0]=1;
		   }
	for(j=1;j<=n;j++)
	  	   {
	       arr[j][n+1]=1;
		   }
	for(j=1;j<=m;j++)
	  	   {
	       arr[m+1][j]=1;
		   }
		   	   
	for(i=1;i<=n;i++)
	  {
	  	for(j=1;j<=m;j++)
	  	   {
	  	   	cin>>arr[i][j];
		   }
		
	  }
	  
	  for(i=1;i<=n;i++)
	  {
	  	for(j=1;j<=m;j++)
	  	   {
	  	   	cout<<arr[i][j];
		   }
		   cout<<endl;
		
	  }
	  
	  for(i=1;i<=n;i++)
	  {
	  	for(j=1;j<=m;j++)
	  	   {
	  	   	if(arr[i-1][j]*arr[i][j-1]*arr[i+1][j]*arr[i][j+1]==k)
	  	   	  {
	  	   	     tmp1=i;
	  	   	     tmp2=j;
	  	   	     goto sapi;
				   }
		   }
	  }
	  sapi:
	  cout<<tmp1<<tmp2;
}
