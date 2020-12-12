#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	int n,i,j,ans[1000];
	char a[100][1000];
	cin>>n;
	for(i=1;i<=n;i++)
	  {
	  	cin>>a[i];
	  	ans[i]=1;
	  	  for(j=1;j<=i-1;j++)
	  	    {
	  	    	if(strcmp(a[i],a[j])==1)
	  	    	  {
	  	    	  	ans[i]++;
					}
			  }
	  }
	  
	  for(i=1;i<=n;i++)
	  {
	  	cout<<ans[i]<<endl;
	  }
}
