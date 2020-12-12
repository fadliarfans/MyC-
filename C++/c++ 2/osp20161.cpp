#include<iostream>

using namespace std;

int prima(int x)
{
	int p,count;
	count=0;
	for(p=1;p<=x;p++)
	   {
	   	if(x%p==0)
	   	  {
	   	  	count++;
		  }

	   }
	if(count==2)
	   {
	   	return 1;
	   }
    else
       {
       	return 0;
	   }
}

int main()
{
	int n,i,j,tmp,arr[100000];
	cin>>n;
	for(i=1;i<=n;i++)
	  {
	  	cin>>arr[i];
	  }
	  
	for(i=1;i<=n;i++)
	  {
	  	for(j=i+1;j<=n;j++)
	  	  {
	  	  	tmp=arr[i]+arr[j];
	  	  	if(prima(tmp)==1)
	  	  	  {
	  	  	  	cout<<"ternyata ada";
	  	  	  	goto sapi;
				  }
			}
	  }
	  cout<<"ternyata tidak ada";
sapi:
return 0;	  
}
