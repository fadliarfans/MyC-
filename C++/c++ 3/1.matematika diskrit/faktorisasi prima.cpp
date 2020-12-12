#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	long long int n,i,num,arr[100000],N;
	for(i=1;i<=100000;i++)
	{
		arr[i]=0;
	}

	cin>>n;

	num=n;
	for(i=2;i<=n;i++)
	{
		
		while((num % i == 0)&&(num!=0))
		  {
		  	num/=i;
		  	arr[i]++;
		  }
		  
		 if((arr[i]!=0)&&(arr[i]!=1))
		{
		   cout<<i<<"^"<<arr[i]<<" ";
		   
		    if(num!=1)
		  {
		  	cout<<"x ";
		  }
		  
        }
        
          if((arr[i]!=0)&&(arr[i]==1))
          {
          	cout<<i<<" ";
          	
           if(num!=1)
		    {
		    	cout<<"x ";
		    }
		    
          }
	}
		  
	return 0;
}
