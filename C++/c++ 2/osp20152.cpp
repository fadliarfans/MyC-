#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	int i,sum[1000];
	char s[1000],k[1000],o[1000]="0123456789";
cin>>s;



for(i=0;i<1000;i++)
   {
   	sum[i]=0;
   }
   
for(i=1;i<=strlen(s);i++)
   {
   	if(strcmp(s,o)==0)
   	     {
   	     	sum[1]++;
   	     	cout<<"4";
		 }
    if(strcmp(s[i],o[0])==0)
         {
         	sum[0]++;
		 }
    if(strcmp(s[i],o[2])==0)
         {
         	sum[2]++;
		 }
	if(strcmp(s[i],o[5])==0)
	     {
	     	sum[5]++;
		 }
	if(strcmp(s[i],o[7])==0)
	     {
	     	sum[7]++;
		 }
   }
	if(((sum[0]>1))||((sum[5]>0)&&(sum[0]>0))||((sum[7]>0)&&(sum[5]>0))||((sum[2]>0)&&(sum[5]>0)))
	  {
	  	cout<<"ADA";
	  }
	else
	{
		cout<<"kaga ada";
	}
}
