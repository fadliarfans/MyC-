#include<iostream>
#include<cstdlib>
#include<conio.h>

using namespace std;

int main()
{
	sapi:
		{
		
	int a,b,c=0,d,g;
	int x;
	
	
	cout<< "---------- Program bilangan prima ----------";
	cout<<endl;
	cout<<"masukan bilangan prima sampai berapa  :  ";cin>>a;
 for (d=1;d<=a;d++)
  {
	for(b=1;b<=d;b++)
	{
		if(d%b==0)
		{
			c++;
		}
	}
	if (c==2)
	{
	cout<<d<<" ";
	g++;
	}
	c=0;
   } 	
   cout<<endl<<endl;
   cout<<"bilangan primanya ada : "<<g<<endl<<endl;
   cout<<endl<<"press 1 and enter to repeat this program  ";cin>>x;
   cout<<endl;
   if (x==1)
   {
   	goto sapi;
   }
   getche();
   return 0;
}
}
