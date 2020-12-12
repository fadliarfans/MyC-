#include<iostream>

using namespace std;

int main()
{
	int a[10],b[10],n,m,q=0,arr[100],c=0,count2=0,t=0,w=0;
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 	   
	 }
	 for(int j=1;j<=100;j++)
	 {
	 	for(int i=0;i<n;i++)
     	 {
 	    	if(j%a[i]==0)
 	    	 {
 	    	 	w++;
			  }
	 	   
	     }
        if(w==n)
        {
        	arr[q]=j;
        	q++;
        	
		}
        w=0;
        
	 
	 	   
	 }


	for(int i=0;i<m;i++)
	 {
	 	cin>>b[i];
	 	 
	 }
	 for(int j=0;j<q;j++)
	{
	
		for(int i=0;i<m;i++)
	    {
	 	if(b[i]%arr[j]==0)
	 	  {
	 	  	c++;
		  }
	 	
	    }
	     if(c==m)
	      {
	      	count2++;
		  }
		  c=0;

   	}
	 
	 cout<<count2;
	
	
}
