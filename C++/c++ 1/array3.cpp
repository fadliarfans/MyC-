#include<iostream>

using namespace std;

int main()
{
	int n,k,f,a[50],sum;
	sum=0;
	cin>>n>>k;
	if(k<=n)
	{
	for(f=1;f<=n;f++)
	 {
	 	cin>>a[f];
	 }
	 
	for(f=1;f<=n;f++)
	 {
	 	if(a[f]>k)
	 	{
	 		sum++;
		 }
	 }
	 
	 cout<<sum<<endl;
}
	
	
}
