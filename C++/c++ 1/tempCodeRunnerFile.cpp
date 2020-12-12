#include<iostream>

using namespace std;

int n,i,arr[10000],a,b;

void bblesort(int n)
{
	bool swapped;
	for(a=0;a<n-1;a++)
	 {
	 	swapped=false;
	 	for(b=0;b<n-1-a;b++)
	 	 {
	 	 	if(arr[b]>arr[b+1])
	 	 	 {
	 	 	 	swap(arr[a],arr[b+1]);
	 	 	 	swapped=true;
			   }
		  }
		  if(swapped==false)
		  {
		  	break;
		  }
		  
	 }
}


int main()
{

cin>>n;

for(i=0;i<n;i++)
  {
  	cin>>arr[i];
  }
  bblesort(n);
  
  for(i=0;i<n;i++)
  {
  	cout<<arr[i]<<endl;
  }
  return 0;
}

  
  
  


