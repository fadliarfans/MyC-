#include<iostream>

using namespace std;

int main()
{
	
long long int a[10000],b[10000],i,j,ans,n,tmp,o,arr[100];
o=1;

	for(i=1;i<=10000;i++)
	  {
	  	a[i]=i;
	  }
	for(j=1;j<=10000;j++)
	{
		ans=0;
	   for(i=1;i<=100;i++)
	     {
	     	if(a[j]%i==0)
	     	{
	     	 ans++;
			 }
		 }
	   
	   	  if(ans==2)
			 {
			 	b[o]=a[j];
			 	o++;
					}  	 
	    
      }
	
      cin>>n;
     for(i=1;i<=n;i++)
      {
      	cin>>arr[i];
	  }	
	  for(i=1;i<=n;i++)
      {
      	cout<<b[arr[i]]<<endl;
	  }	
	
	
	
	
	
	

}
