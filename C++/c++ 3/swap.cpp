#include<iostream>

using namespace std;

int a,b;

void swap()
{
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
}
int main()
{
	
	cin>>a>>b;
	cout<<a<<endl<<b<<endl;
	swap();
	cout<<a<<endl<<b<<endl;
}
