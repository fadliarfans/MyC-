#include<iostream>

using namespace std;

int main()
{
	int a[1000],n,i,p=1,j;
	
   cin>>n;
   for(i=1;i<=n;i++)
     {
     cin>>a[i];
	 }
   for(n;n>0;n--)
    {
    	if(n!=1)
    	{
    	cout<<a[n]<<" ";
    }
    else
     {
     	cout<<a[n]<<endl;
	 }
	}
	 
	 
	 return 0;
	
}


