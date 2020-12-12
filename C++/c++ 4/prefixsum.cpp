#include<iostream>

using namespace std;

int j,i,n,arr[1000],prefixsum[10][100],o=1,leftl[100],rightl[100],k,d=1,f=2,count[1000],b=0,h;

void isiprefixsum(int x,int y)
{
	while(o<=n)
	{
	prefixsum[o][x]=arr[o];
	for(j=2;j<=y;j++)
	  {
	  	prefixsum[o][j]=prefixsum[o][j-1]+arr[j+o-1];
	  }
	  o++;
    }
 
}


int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	   {
	   	cin>>arr[i];
	   }
	 
	 cin>>h;
	 
	 for(i=1;i<=h;i++)
	   {
	   count[i]=0;
        }   

	 for(i=1;i<=h;i++)
	 {
	 	cin>>leftl[i]>>rightl[i];
	  } 
	   
	   
	  
	
	 for(i=1;i<=n;i++)
	 {
	 	d=1;f=2;b++;
	 	
	   isiprefixsum(leftl[i],rightl[i]);
	   
	   for(j=1;j<=n;j++)                    
	   {
	   	  
	     
	    } 
	  
}
	   
	   for(i=1;i<=h;i++)
	   {
	   cout<<count[i]<<endl;
        }   

	}

