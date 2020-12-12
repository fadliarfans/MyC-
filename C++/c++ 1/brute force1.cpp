#include<iostream>

using namespace std;

int main()
{
	int a,b,c,d[10000],x,y,z,n;
	
	cin>>a;
	d[0]=0;
	n=0;
	for(x=1;x<=a;x++)
	{
		cin>>b;
		if((b<2)||(b>1000))
		 	{
		 		goto sapi;
		 		
			 }
		for(y=1;y<=b;y++)
		 {
		 	cin>>d[y];
		 	if((d[y]<1)||(d[y]>5000))
		 	{
		 		goto sapi;
		 		
			 }
		 }
		 for(z=1;z<=b;z++)
		 {
		 	for(c=0;c<z;c++)
		 	{
		 		if(d[c]<=d[z])
		 		{
		 			if(c!=0)
					 {
		 			n++;
		 		      }
				 }
			 }
		 }
	cout<<n<<endl;
	n=0;
	}
	cout<<n;
	sapi:;
	return 0;
}
