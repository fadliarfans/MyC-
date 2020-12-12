#include<iostream>

using namespace std;

int main()
{
	int a,b,x,y,n,m,j,o;
	cin>>a>>b;
	if((a<=1000)&&(a>=1)&&(b>=2)&&(b<=1000))
	{
	n=a;
	j=0;
	o=0;
	for(x=1;x<=a;x++)
	 {
	 	if(x==a)
	 	{
	 	y=n/b;
	 	if(n%b!=0)
	 	{
	 		j+=n%b;
		 }
		 if(j>=b)
		 {
		 	o=j/b;
		 	j=j%b;
		 		 	
		 }
	 	a=a+y+o;
	 	n=y+o;
	 	o=0;
	 }
	 }
	 cout<<a;
}
	 return 0;
}
