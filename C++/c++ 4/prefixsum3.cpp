#include<iostream>

using namespace std;

int lp,rp,ps[1000],arr[1000],n,j,i,g=1,tmp[1000],count=0,tmp2,tmp3;

void fps(int x)
{
	ps[1]=tmp[x];
	for(j=2;j<=n;j++)
	  {
	  	ps[j]=ps[j-1]+tmp[x+j-1];
	  }
}

int main()
{
cin>>n;

for(i=1;i<=n;i++)
   {
   	cin>>arr[i];
   }
   
cin>>lp>>rp;


for(i=lp;i<=rp;i++)
   {
   	tmp[g]=arr[i];
   	g++;
   }
 
for(i=1;i<=rp-lp;i++)
{
   fps(1);
    tmp2=ps[i];   
    
    cout<<tmp2<<endl;
    
   fps(i+1);
    tmp3=ps[rp-lp+1];

    cout<<tmp3<<endl<<endl;

if(tmp2==tmp3)
 {
 	count++;
 }
}

cout<<count;
/*fps(1);
tmp2=ps[1];
fps(2);
tmp3=ps[3];

fps(1);
tmp2=ps[2];
fps(3);
tmp3=ps[2];

fps(1);
tmp2=ps[3];
fps(4);
tmp3=ps[1]; */




}

