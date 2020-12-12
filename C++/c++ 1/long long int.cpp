#include<iostream>

using namespace std;



long long int jo(int n,int m)
{
	long long int p,g;
	g=n;
	for(p=1;p<m;p++)
	{
		g=g*n;
	}
	return g;
}

int main()
{
	long long int a,b,x,y,n,d[10000],h;
	y=0;
	cin>>a>>b;
	n=0;
	b--;
   for(x=1;x<=b;x++)
   {
   	n++;
   	y+=jo(a,x);
   	d[n]=y;
   	cout<<y+1<<" "<<"untuk maks "<<x+1<<" Bits"<<" Yaitu "<<d[n-1]+1<<" dan -"<<d[n-1]+2<<endl;
   }
   cout<<y+2<<" untuk bit yang ke-"<<x+1;
   cin>>h;
   return 0;
}
