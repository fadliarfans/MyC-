#include<iostream>

using namespace std;

int x,y,temp;

int lcm(int a,int b)
{	

 if(a<b)
   {
    a+=x;
   	temp=lcm(a,b);
	   }
	   
  else if(a>b)
    {
    	b+=y;
    	temp=lcm(a,b);
		}	
		
   else
      {
        return a;
		  }	
}
int main()
{

	cin>>x>>y;
    cout<<lcm(x,y);
	
}
