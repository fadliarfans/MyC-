#include<iostream>

using namespace std;

int main()
{
	int n,a,b,arr[100000],max,min,d[10000],e[10000],f;
	max=-10000;
	min=10000;
	
	
	
	for(a=1;a>0;a++)
	  {
	  	cin>>n;
	  	
	  	if(n==0)
	  	{
	  		break;
		  }
		  
	  	for(b=1;b<=5;b++)
	  	 {
	  	 	cin>>arr[b];
	  	 	if(arr[b]>max)
	  	 	  {
	  	 	  	max=arr[b];
	  	 	  	d[a]=max;
				 }
		    if(arr[b]<min)
		         {
		         	min=arr[b];
		         	e[a]=min;
				 }
		   }
		
	  }
       for(f=1;f<=a;f++)
         {
         	cout<<d[f]<<endl;
         	cout<<e[f];
		 }
 
	  
    
}
