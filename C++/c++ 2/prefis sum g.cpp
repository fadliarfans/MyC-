#include<iostream>

using namespace std;

	int k=1,arr[1000],n,i,prefixsum[10000];
	
void prefixsumisi(int arr[],int n,int prefixsum[],int k)
{
	int i;
	prefixsum[1]=arr[k];
	for(i=k;i<=n;i++)
	 {
	 	prefixsum[i]=prefixsum[i-1]+arr[i];
	 }
}

bool cek(n,)
{
	for(i=1)
	
}

int main()
{
	

	cin>>n;
	for(i=1;i<=n;i++)
	  {
	  	cin>>arr[i];
	  }
	  while(x==false)
	  {
	  prefixsumisi(arr,n,prefixsum,k);
	  cek()
	  k++
      }
	  
	for(i=1;i<=n;i++)
	  {
	  	cout<<prefixsum[i];
	  }
}
