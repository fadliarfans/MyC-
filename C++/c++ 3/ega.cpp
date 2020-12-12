#include<iostream>

using namespace std;

int main()
{
	int n,m,k,j,o,p,arr[10][10],i,tmp[100];
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>k;
		  for(j=0;j<k;j++)
		  {
		  	cin>>arr[i][j];
		  }
	}
	for(i=1;i<=m;i++)
	{
		cin>>o>>p;
		tmp[i]=arr[o][p];
	}
	for(i=1;i<=m;i++)
	{
		cout<<tmp[i]<<endl;
	}
}
