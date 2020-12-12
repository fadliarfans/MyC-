#include<iostream>

using namespace std;

int main()
{
	int n,tot,temp,i,a[1000];
	temp=0;
	cin>>n;
	for(i=1;i<=n-1;i++)
	 {
	 	cin>>a[i];
	 }
	 tot=(n*(n+1))/2;
	 for(i=1;i<=n-1;i++)
	 {
	 	temp+=a[i];
	 }
	 cout<<tot-temp;
}
