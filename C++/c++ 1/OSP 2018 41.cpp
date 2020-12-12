#include<iostream> // input ouput
#include<conio.h>  // getche and clrscr
#include<stdio.h>  //gets(var) , printf , scanf(%i<integer,&var)
#include<cstdlib>  // exit_succes  <return EXIT_SUCCES>

#define hop 100

using namespace std;

int a,c,d,e;
int b[100000];
int main()
{
	
	
	  
	cout<<" ------------ program dapet sertifikat OSP 2018 ------------- ";
	cout<<endl<<endl;
	cout<<"masukan ada berapa nilai : ";
	cin>>a;
	cout<<endl;
	c=1;
	for(c;c<=a;c++)
	  {
	  	
	  	scanf("%i",&b[c]); // bisa pake cin
	  	
	  	if ((b[c]>100) || (b[c]<1))
	  	 {
	  	 	cout<<"nilainya aneh";
	  	 	break;
		 }
		 
		if (b[c]>b[c-1])
		  {
		  	d=b[c];
		  }
		  
	  }
	 c=1; 
	 
	 
	for (c;c<=a;c++)
	  {
	  	if (b[c]==d)
	  	{
	  		e++;
		}
	  }
	
	  cout<<endl;
	  cout<<"yang mendapat setifikat ada  : "<<e<<" orang."<<endl;
	  getche();
	  return 0;
}
