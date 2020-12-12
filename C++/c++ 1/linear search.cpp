#include<iostream>

using namespace std;

int main()
{
	int a[100],n,s,i,y;
	y=0;
	cin>>n>>s;
	for(i=0;i<=n-1;i++)
	 {
	 	cin>>a[i];
	 }
	 
	 for(i=0;i<=n-1;i++)
	 {
	 	if(a[i]==s)
	 	{
	 		cout<<i;
	 		y++;
	 		break;
		 }
	 }
	 if(y==0)
	 {
	 	cout<<"-1";
	 }
	 return 0;
}
