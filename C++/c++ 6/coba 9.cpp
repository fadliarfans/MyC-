#include<iostream>

using namespace std;

int sapi(int y)
{
	int q=0,w=0,e=0;
	int arr[y][y];
	for(int h=0;h<y;h++)
	{
	   for(int g=0;g<y;g++)
	    {
		  cin>>arr[h][g];
	    }	
	}
	for(int t=0;t<y;t++)
	{
		q+=arr[t][t];
		w+=arr[y-t-1][t];
    }
		if(q-w<0)
		{
			e=(q-w)*-1;
		}
		else
		{
			e=q-w;
		}
	return e;
	
}
int main()
{
	int x;
	cin>>x;
	cout<<sapi(x);
}
