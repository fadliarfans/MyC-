#include<iostream>

using namespace std;


int prefixsum[10000],n,i,arr[10000],k,g,oi,tmp[1000];

void isiprefixsum(int y)
{
	int j;
	tmp[oi]=y;
	prefixsum[y]=arr[y];
	for(j=y+1;j<=n;j++)
	{
		prefixsum[j]=prefixsum[j-1]+arr[j];
	}
	oi++;
}

int main()
{
oi=1;	
cin>>n;

for(i=1;i<=n;i++)
{
	cin>>arr[i];
}


for(i=1;i<=n;i++)
{
	isiprefixsum(i);
	for(k=i;k<=n;k++)
	{
		if(prefixsum[k]%n==0)
		{
			cout<<endl<<prefixsum[k]<<endl;
			cout<<tmp[i]<<endl;
			for(g=tmp[i];g<=k;g++)
			{
				cout<<arr[g]<<" ";
			}
			
			goto sapi;
		}
	}
}

sapi:
	return 0;
}
