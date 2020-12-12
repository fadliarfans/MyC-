#include<iostream>

using namespace std;
int arr[1000000],temp[1000000],n;
void binser(int x)
{
   int mid,left,right;
   left=0;
   right=n-1;
   mid=(right+left)/2;
   
  while((left>=0)&&(right<=n)&&(arr[mid]!=x)&&(right>left))
  {
  	if(x>arr[mid])
  	 {
  	 	left=mid+1;
	   }
    else if(x<arr[mid])
      {
      	right=mid-1;
	  }
	mid=(right+left)/2;
  }
  if(arr[mid]==x)
  {
  	cout<<mid<<endl;;
  }
  else
  {
  	cout<<"-1"<<endl;;
  }
}

int main()
{
	int i,h;
	
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>h;
		for(i=0;i<h;i++)
	{
		cin>>temp[i];
	}
	for(i=0;i<h;i++)
	{
		binser(temp[i]);
    }
	
return 0;
	
}
