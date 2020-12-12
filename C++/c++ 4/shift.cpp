#include<iostream>

using namespace std;

int main()
{
	int n,x1,x2,i,arr[10000],tmp;
	cin>>n;
	for(i=1;i<=n;i++)
	   {
	   	cin>>arr[i];
	   }
    cin>>x1>>x2;
    tmp=arr[x1];
    for(x1;x1<x2;x1++)
      {
      	arr[x1]=arr[x1+1];
	  }
	  	arr[x2]=tmp;
	  cout<<endl;
	for(i=1;i<=n;i++)
	   {
	   	cout<<arr[i];
	   }
}
