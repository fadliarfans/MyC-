#include<iostream>
#include<string.h>
using namespace std;

int cek(string x, string y)
{
	int i,j;
	int k,l;
	k=x.length();
	l=y.length();
	
	for(i=0;i<=k-l;i++)
	  {
	  	for(j=0;j<l;j++)
	  	   {
	  	   	if(x[j+i]!=y[j])
	  	   	break;
			 }
	     if(j==l)
	     {
	     	return i;
		 }
		 
	  }
	  return -1;
}

int main()
{
	string s1,s2;
	int tmp;
cin>>s1>>s2;

tmp= cek(s1,s2);

if(tmp==-1)
{
	cout<<"gak ada";
	}	
	
else 
{
	cout<<"ada kok di index "<<tmp;
}

}
