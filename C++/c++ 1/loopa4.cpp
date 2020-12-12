#include<iostream>

using namespace std;

int permutasi(int u);

int main()
{
	int n,a,b[10],c,d,x,g,h,y,o=0,q;
	h=1;
	cin>>n;
b[1]=0;
b[2]=0;
b[3]=0;
b[4]=0;
	for(x=9;x>=0;x--)
	{
		
		
		while(n>=x)
		{
			
			n-=x;
			b[h]=x;
			h++;
			if(n==0)
			{
				break;
			}
		}
	}

	for(x=1;x<=4;x++)
	{
		for(y=x+1;y<=4;y++)
		{
			if(b[x]==b[y])
			{
				o++;
			}
		}
	}
q=permutasi(4)/permutasi(o);	
cout<<q;



	return 0;
}

int permutasi(int u)
{
	int f;
	f=1;
	if(u>0)
	{
	f=u*permutasi(u-1);
	if(u==1)
	{
		f=1;
	}
    }
	
	return f;

}
