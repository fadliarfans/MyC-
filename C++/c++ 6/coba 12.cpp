#include<iostream>

using namespace std;



void swap(long long int* x,long long int* y)
{
	int temp= *x;
	*x=*y;
	*y=temp;
}

void bubblesort(long long int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	   for(int j=0;j<n-i-1;j++)
	      if(arr[j]>arr[j+1])
	        swap(&arr[j],&arr[j+1]);
	
}


int main()
{
	long long int agg[5],g=0,h=0;
	
	for(int i=0;i<5;i++)
	{
		cin>>agg[i];
	}
	
	bubblesort(agg,5);
	
    for(int i=0;i<4;i++)
     {
     	g+=agg[i];
	 }
	 for(int i=1;i<5;i++)
     {
     	h+=agg[i];
	 }
	 cout<<g<<" "<<h;
}
