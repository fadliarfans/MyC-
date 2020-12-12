#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int n,x,i,j,tmp;
	float arr[100],w[100],c[100],ans,max;
	cin>>n>>x;
	
	cout<<setprecision(5)<<fixed;
	
	for(i=1;i<=n;i++)
	 {
	 	cin>>w[i];
	 }
      for(i=1;i<=n;i++)
	 {
	 	cin>>c[i];
	 }
	 
	 for(i=1;i<=n;i++)
	 {
	 	arr[i]=c[i]/w[i];
	 }
	 
	 ans=0;
	 
	  for(i=1;i<=n;i++)
	 {
	 	max=0;
	 	 for(j=1;j<=n;j++)
	    {
	 	   if(arr[j]>max)
	 	     {
	 	     	max=arr[j];
	 	     	tmp=j;
			  }
	    }
	    
	      while((w[tmp]>0)&&(x>0))
	        {
	        	w[tmp]--;
	        	x--;
	        	ans+=max;
			}
			arr[tmp]=0;
	 }
	 
	 cout<<ans;
}
