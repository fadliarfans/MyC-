#include<iostream>

using namespace std;

int fpb(int x,int y)
  {
 int ans,g,h;
   g=max(x,y);
   h=min(x,y);
   if(h==0)
     {
     	ans=g;
	 }
	else
	{
		ans=fpb(h,g-h);
	}
   return ans;
 
  }

int main()
{
	bool layak=true;
	int n,i,j,batu[10000];
	cin>>n;
	for(i=0;i<n;i++)
	  {
	  	cin>>batu[i];
	  }
	for(i=0;i<n;i++)
	  {
	  	for(j=i+1;j<n;j++)
	  	  {
	  	  	if(fpb(batu[i],batu[j])!=1)
	  	  	 {
	  	  	 	layak=false;
				 }
			}
		}
	if(layak==true)
	 {
	 	cout<<"LAYAK";
		   }
	else
	{
	cout<<"TIDAK LAYAK";
}
 
}
