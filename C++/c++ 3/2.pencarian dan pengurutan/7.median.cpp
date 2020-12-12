#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int n,i,tmp;
	float arr[i],tmp2;
	cin>>n;
	
	for(i=1;i<=n;i++)
	 {
	 	cin>>arr[i];
	 }
	 
	 cout<<setprecision(1)<<fixed;
	 
	 if(n%2==1)
	 {
	 	tmp=(n/2);
	 	cout<<arr[tmp+1]<<endl;
	 }
	 
	 if(n%2==0)
	 {
	 	tmp=(n/2);
	 	tmp2=(arr[tmp]+arr[tmp+1])/2;
	 	cout<<tmp2<<endl;
	 	
	 }
}


