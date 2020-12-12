#include<iostream>

using namespace std;

int main()
{
	int n,p,a,arr1[100000],arr2[100000],arr3[100000],q,b,sum=0,c;
	
	cin>>n;
	
	for(c=1;c<=n;c++)
	{
		arr3[c]=c;
	}
	
	cin>>p;
	for(a=1;a<=p;a++)
	 {
	 	cin>>arr1[a];
	 }
	cin>>q;
	for(a=1;a<=q;a++)
	 {
	 	cin>>arr2[a];
	 }
	 for(a=1;a<=n;a++)
	 {
	 	for(b=1;b<=n;b++)
	 	{
	 	if((arr1[a]==arr3[b])||(arr2[a]==arr3[b]))
	 	{
	 		sum++;
	 		arr3[b]=0;
	 		cout<<arr3[b]<<" ";
		 }
	    }
	 }
	 if(sum==n)
	 {
	 cout<<"I become the guy.";
     }
     else
     {
     cout<<"Oh, my keyboard!";
     }
 return 0;
	
}
