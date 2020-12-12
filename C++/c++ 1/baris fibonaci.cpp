#include<iostream>
#include<cstdlib>

using namespace std;

void fibonnaci(int a,int b,int c)
{
int i,g;
cout<<endl;
cout<<a<<" "<<b<<" ";
for(i=3;i<=c;i++)    
  {
	g=a+b;
	cout<<g<<" ";
	a=b;
	b=g;
  }
	
		
}

int x,y,z;


int main(int argc, char *argv[])
{
cout<<"=========== Program fibonaci ==========="<<endl;
cout<<endl<<endl;
cout<<"masukan bilangan fibonaci pertama        :  ";cin>>x;cout<<endl;
cout<<"masukan bilangan fibonaci kedua          :  ";cin>>y;cout<<endl;
cout<<"ingin sampai bilangan fibonaci ke berapa :  ";cin>>z;cout<<endl;
fibonnaci(x,y,z);
cout<<endl<<endl<<endl;
system("PAUSE");
return 0;
	
}
