#include<iostream>

using namespace std;

long long int sumarr(int x)
{
	int arr[x];
	long long int y=0;
	for(int i=0;i<x;i++)
	 {
	 	cin>>arr[i];
	 	y+=arr[i];
	 }
	 return y;
}

int main()
{
	int n;
	cin>>n;
	cout<<sumarr(n);
	return 0;

}
