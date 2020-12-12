#include<iostream>

using namespace std;

int main()
{
	int a,b,c,d,e,z,x,s,f,kolom,baris,kolom1,kolom2;
	
	cin>>a;
	cin>>kolom;
	cin>>baris;
	
	
	a=2*a-1;
	

   
	for(b=1;b<=a;b+=2)
	{
	  for(e=a-b;e>0;e-=2)
	  {
	  	cout<<" ";
	  }
	  for(c=1;c<=b;c++)
	   {
	   	if((c==1)||(c==b)||(c==(b/2)+1)||(b==a))
	   	{
	   		cout<<"@";
		   }
		   else
		   {
	   	cout<<"*";
	   }
	   	
	   }
	   cout<<endl;
	  
	}
	
	for(b=a-1;b>0;b-=2)
	{
	  for(e=b;e<a;e+=2)
	  {
	  	cout<<" ";
	  }
	  for(c=1;c<b;c++)
	   {
	   	if((c==1)||(c==b-1)||(c==b/2))
	   	{
	   		cout<<"@";
		   }
		   else
		   {
	   	cout<<"*";
	   }
	  
	   }
	
	    cout<<endl;
	   
	  
	}
	
		

	
	  
	return 0;
}
