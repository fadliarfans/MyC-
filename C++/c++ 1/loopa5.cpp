#include<iostream>

using namespace std;

int main()
{
	long long int b,c,d,n,x,z[100],f,k;
	
	for(n=0;n<101;n++)
	{
		z[n]=0;
	}
	
	k=0;
	x=1;
	n=1;
	
	while((n!=0)&&(x!=0))
   {
   	
   	k++;
	cin>>n>>x;
	if((n>100)||(n<3)||(x>300)||(x<0))
	{
		break;
	}
	
	if((n==0)&&(x==0))
	{
		break;
	}
	
	for(b=1;b<=n;b++)
	{
		for(c=1;c<=n;c++)
         	{
		        for(d=1;d<=n;d++)
             	{
		         if ((b+c+d==x)&&(b<c)&&(b<d)&&(c<d))
		         {
		         	z[k]=z[k]+1;
				 }
		         
        	    }
        	}
	}
  }
  for(f=1;f<=k-1;f++)
  {
	cout<<z[f]<<endl;
  } 
}
