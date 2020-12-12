#include<iostream>

using namespace std;

int main()
{
	int n,m,i,j,arr[1000],tmp[1000],x[1000],y[1000];
	cin>>n;
	for(i=1;i<=n;i++)
      {
      	cin>>arr[i];
	  }
	cin>>m;
	for(i=1;i<=m;i++)
	   {
	   	cin>>x[i];
	   	cin>>y[i];
	   }
     
     for(i=1;i<=m;i++)
	   {
	   	tmp[i]=0;
	    for(j=1;j<=n;j++)
         {
      	   if((arr[j]>x[i])&&(arr[j]<=y[i]))
      	      {
      	      	tmp[i]++;
				}
	     }
	   }
	   
	   for(i=1;i<=m;i++)
	   {
	   	cout<<tmp[i]<<endl;
	   }
}
