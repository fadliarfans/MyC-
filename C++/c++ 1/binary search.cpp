#include<iostream>

using namespace std;
int arr[1000],n;
void binser(int x)
{
   int mid,left,right;
   left=0;
   right=n-1;
   mid=(right+left)/2;
   
  while((left>=0)&&(right<=n)&&(arr[mid]!=x))
  {
  	if(x>arr[mid])
  	 {
  	 	left=mid-1;
	   }
    else if(x<arr[mid])
      {
      	right=mid+1;
	  }
	mid=(right+left)/2;
  }
  if(arr[mid]==x)
  {
  	cout<<"yes";
  }
}

int main()
{
	int i,h;
	
	cin>>n;
	cin>>h;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	binser(h);
	
}
