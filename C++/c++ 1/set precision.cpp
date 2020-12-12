#include<iostream>
#include<iomanip>

using namespace std;

int main()

{
	int c;
	double a,b;
	cout<<setprecision(2)<<fixed;
	cin>>a>>b;
	c=a;
	if((c%5==0)&&(a<=b)&&(a&&b<=2000))
	{
	cout<<b-a-0.50<<endl;
}
	return 0;
	
	
	
	
}
