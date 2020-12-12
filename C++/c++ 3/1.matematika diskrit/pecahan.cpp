#include<iostream>

using namespace std;

int main()
{
	int a,b,c,d,e,f,i;
	cin>>a>>b>>c>>d;
	e=a*d+c*b;
	f=b*d;
	for(i=2;i<=min(e,f);i++)
	  {
	  	while((e%i==0)&&(f%i==0))
	  	   {	
	  	   	e/=i;
	  	   	f/=i;
			 }
			 if((e<i)&&(f<i))
			    {
			    	break;
				}
	  }
	  cout<<e<<" "<<f;
}
