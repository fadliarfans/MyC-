#include<iostream>

using namespace std;

int main()
{
	int n,j,i,candy[1000],freko,frek,ans[1000],x,y,o;
	cin>>n;
	for(i=1;i<=n;i++)
	  {
	  	cin>>candy[i];
	  }
     o=1;
	for(i=1;i<=n;i++)
	  {
	  	for(j=i+1;j<=n;j++)
	  	   {
	  	   	   
	  	   	ans[o]=candy[i]+candy[j];
	  	     o++;
         	}
	  }
	  for(i=1;i<=o;i++)
	    {
	    	freko=0;
	    	for(j=1;j<=o;j++)
	    	   {
	    	   	if(ans[i]==ans[j])
	    	   	   {
	    	   	   	freko++;
					  }
			   }
			  if(freko>frek)
			    {
			    	frek=freko;
				 } 
		}
	  
cout<<frek;
		}


