#include<iostream>

using namespace std;

int main()
{
	int a,b[100],c[100],d[100],e[100],x,q,w;
	cin>>a;
	for(x=1;x<=a;x++)
	{
	cin>>b[x]>>c[x]>>d[x]>>e[x];
    }  
    
	for(x=1;x<=a;x++)
	{
	   for(q=1;q<=b[x];q++)
	   {
		for(w=1;w<=c[x];w++)
		{
			if(w==e[x])
			{
				cout<<"*";
			}
			else if(q==d[x])
			{
				cout<<"*";
			}
			else{
			cout<<".";
		}
		}
		cout<<endl;
	   }
	   cout<<endl;
    }  
    return 0;
    
}
