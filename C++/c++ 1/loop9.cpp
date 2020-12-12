#include<iostream>

using namespace std;

int main()
{
	int a,b,c,n,f,q[10];
	int r[10],s[10];
	a=0;
	n=1;
	while(a!=1)
	{
		s[0]=0;
		
		cin>>a;
		if(a>10)
		{
			break;
		}
		
		if(a<=0)
		{
			break;
		}
		for(b=1;b<=a;b++)
		 {
		 	cin>>r[b]>>s[b];
		 	if((r[b]>90)||(s[b]>12))
		 	{
		 		return 0;
		 		break;
			 }
		 }
		 q[n]=0;
		 for(b=1;b<=a;b++)
		 {
		 	q[n]+=r[b]*(s[b]-s[b-1]);
		 	if(s[b]-s[b-1]<0)
		 	{
		 		return 0;
		 		break;
			 }
		 	
		 }
		 
		 n++;
	}
	n--;
	cout<<endl;
	for(f=1;f<=n;f++)
	{
		cout<<q[f]<<" miles"<<endl;
	}

return 0;
}
