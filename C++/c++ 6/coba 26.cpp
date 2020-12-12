#include<iostream>

using namespace std;

int arr2[5],arr3[5];

void proc1(int x)
{
	long long int arr[x];
	for(int i=0;i<x;i++)
	 {
	 	cin>>arr[i];
	 	if(arr[i]==1)
	 	 {
	 	 	arr2[0]++;
		  }
			if(arr[i]==2)
	 	 {
	 	 	arr2[1]++;
		  }
		  	if(arr[i]==3)
	 	 {
	 	 	arr2[2]++;
		  }
		  	if(arr[i]==4)
	 	 {
	 	 	arr2[3]++;
		  }
		  	if(arr[i]==5)
	 	 {
	 	 	arr2[4]++;
		  }
	 }
}

int main()
{
	int n,max=0,tmp;
	cin>>n;
	proc1(n);
	for(int i=1;i<=5;i++)
	 {
	 	arr3[i-1]=i;
	 }
	for(int i=4;i>=0;i--)
	 {
	 	
	 	if(arr2[i]>=max)
	 	 {
	 	 	max=arr2[i];
	 	 	tmp=arr3[i];
	 	 	
		  }
	 }
	 cout<<tmp;
}
