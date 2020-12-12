#include<iostream>

using namespace std;

int main()
{
 
  int p[1000],l[1000];
   int x,y,z,a,b;
   x=1;
   
   while((x!=0)&&(y!=0))
   {
   	cin>>p[x]>>l[x];
   	
   	if((p[x]>300)||(l[x]>300)||(p[x]<1)||(l[x]<1))
   	   {
   		break;
   		x=0;
	   }
	   
   	if((p[x]==0)&&(l[x]==0))
   	   {
   		break;
   		x=0;
	   }
	   x++;
   }
   
   for(y=1;y<=x;y++)
   {
   	for(a=1;a<=p[y];a++)
   	{
   		for(b=1;b<=l[y];b++)
   		{
   			cout<<"#";
		   }
		   cout<<endl;
	   }
	   cout<<endl;
   }
return 0;
}


