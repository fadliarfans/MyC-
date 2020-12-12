#include<iostream>

using namespace std;


int main()
{
	int s,t,a,b,m,n,i,o,count1=0,count2=0;;
	cin>>s>>t>>a>>b>>m>>n;
    int arr1[m],arr2[n];
	for(int i=0;i<m;i++)
	 {
	 	cin>>arr1[i];
	 	arr1[i]+=a;
	 	if(arr1[i]>=s && arr1[i]<=t)
	 	 {
	 	 	count1++;
		  }
	 }
	 for(int i=0;i<n;i++)
	 {
	 	cin>>arr2[i];
	 	arr2[i]+=b;
	 	if(arr2[i]>=s && arr2[i]<=t)
	 	 {
	 	 	count2++;
		  }
	 }
	cout<<count1<<endl;
	cout<<count2;
}
