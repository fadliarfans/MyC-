#include<iostream>

using namespace std;

int main()
{
	int n,j=1,arr[10000],i;
  cin>>n;
  for(i=1;i<=n;i++)
    {
    while((j%3==0)||(j%4==0))
    {
    	j++;
	}
    	arr[i]=j;
    	j++;
	}
	cout<<arr[n];
	
}
