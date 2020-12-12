#include<iostream>

using namespace std;

int a[1000],n,t,q,w,l,r,m,k,o[1000],s,d,tmp,hi,of[1000],kocak;

void menemukan(int x);

int main()
{
	for(l=1;l<=1000;l++)
	{
		a[l]=l;
	}
	cin>>n;
	cin>>q;
	
	
		for(k=1;k<=q;k++)
		{
		
		cin>>t;
   
		if(t==1)
     	{
		cin>>kocak;
		cout<<a[kocak];
     	}
	
	     if(t==2)
	     {
	     	cin>>s>>d;
	     	tmp=a[s];
	     	a[s]=a[d];
	     	a[d]=tmp;
		 }
		 
		 if(t==3)
		 {
		 	cin>>l>>r;
		 	tmp=a[l];
		 	hi=l;
		 	for(l;l<=r;l++)
		 	{
		 		if(l==r)
		 		{
		 			a[l]=tmp;
				 }
				 else
				 {
		 		a[l]=a[l+1];
		        	}
		        	
			 }
			
		 }
		 
		 if(t==4);
		 {
		 	cin>>k;
		 	for(hi=1;hi<=k;hi++)
		 	{
		 		cin>>of[hi];
			 }
			 
		 }
	
	}
	
}
