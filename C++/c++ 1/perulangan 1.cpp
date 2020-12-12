#include<iostream>

using namespace std;

int main()
{
	int a,b,i,g;
	cin>>a>>b;
	g=a;
	if(a<=1000)
	{

	if(a>0)
	{
	 while(a<=b)
     	{
		a=g;
		i++;
		a=a*i;		
	   }
	      
     	b=i-1;
	cout<<"-INF "<<b<<endl;
    }
    
    else if(a<0)
      {
      	while(a<=b)
      	{
      	a=g;
      	i--;
      	a=a*i;
       }
       
   
	   
       b=i+1;
      	cout<<b<<" INF"<<endl;
      }
      
    else if((a==0)&&(b==0))
    {
    	cout<<"all"<<endl;
	}
	
   else
    {
    	cout<<"no solution"<<endl;
	}
}
	  return 0;
}
