#include<iostream>

using namespace std;

int n;

void p(int y)
{
	int t=y;
	
	while(y<n)
	 {
	 	y++;
	 	cout<<" ";
	 }
	 
	   for(int q=0;q<t;q++)
	   {
	 	cout<<"#";
	   }
	   
	 cout<<endl;
	 
}

int main()
{
	cin>>n;
	 for(int i=1;i<=n;i++)
    	{
    		p(i);
     	}
	return 0;
}
